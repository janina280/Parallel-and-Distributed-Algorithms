#include <map>
#include <string>
#include <fstream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    string inputWord;
    map<string, int> wordsFrequency;
    vector<string> words;

    auto start = high_resolution_clock::now(); // Start timing

    while (fin >> inputWord)
    {
        words.push_back(inputWord);
    }

    for (auto& word : words)
    {
        wordsFrequency[word]++;
    }

    for (auto& word : wordsFrequency)
    {
        fout << "The word '" << word.first << "' appears '" << word.second << "' times\n";
    }

    auto stop = high_resolution_clock::now(); // Stop timing
    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration

    fout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    return 0;
}
