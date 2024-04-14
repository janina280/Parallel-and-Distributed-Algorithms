#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    std::ifstream file("input_1M.txt");
    if (!file.is_open()) {
        std::cerr << "Unable to open file\n";
        return 1;
    }

    std::unordered_map<std::string, int> wordCount;

    std::string word;
    while (file >> word) {
       
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
 
        wordCount[word]++;
    }

    
    auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Execution time: " << duration.count() << " microseconds\n";

    std::ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Unable to open output file\n";
        return 1;
    }

    for (const auto& pair : wordCount) {
        outputFile << pair.first << ": " << pair.second << std::endl;
    }

    std::cout << "Results written to output.txt\n";

    return 0;
}
