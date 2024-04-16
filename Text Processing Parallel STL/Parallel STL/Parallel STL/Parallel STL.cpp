#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void countWords(const std::string& filename, std::unordered_map<std::string, int>& wordCount) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        return;
    }

    std::string word;
    while (file >> word) {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        std::lock_guard<std::mutex> lock(mtx);
        wordCount[word]++;
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    const std::string inputFilename = "input_10k.txt";
    const std::string outputFilename = "output.txt";

    std::unordered_map<std::string, int> wordCount;

    const int numThreads = std::thread::hardware_concurrency();

    std::vector<std::thread> threads;
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(countWords, inputFilename, std::ref(wordCount));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Execution time: " << duration.count() << " microseconds\n";

    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        std::cerr << "Unable to open output file\n";
        return 1;
    }

    for (const auto& pair : wordCount) {
        outputFile << pair.first << ": " << pair.second << std::endl;
    }

    std::cout << "Results written to " << outputFilename << std::endl;

    return 0;
}
