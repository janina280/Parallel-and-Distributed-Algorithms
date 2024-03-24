#include <map>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    string inputWord;
    map<string, int> wordsFrequency;
    vector<string> words;

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

    return 0;
}