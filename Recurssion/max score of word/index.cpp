#include <iostream>
#include <map>
#include <vector>
using namespace std;
void printMap(map<char, pair<int, int>> m)
{
     for (auto itr = m.begin(); itr != m.end(); itr++)
     {
          cout << itr->first << "--(" << itr->second.first << "," << itr->second.second << ")" << endl;
     }
}

bool isValidWord(string word, map<char, pair<int, int>> m)
{
     for (int i = 0; i < word.size(); i++)
     {
          char ch = word[i];
          if (m.find(ch) == m.end() || m[ch].first <=0)
          {
               return false;
          }
     }
     return true;
}

int getMaxCount(vector<string> words, vector<int> scores, map<char, pair<int, int>> m, int idx)
{
     if (idx == words.size())
     {
          return 0;
     }
     int scoreWithoutCurrentWord = getMaxCount(words, scores, m, idx + 1);

     int scoreForCurrentElement = 0;
     string currentWord = words[idx];
     bool validWordFlag = false;
     validWordFlag = isValidWord(currentWord, m);
     if (validWordFlag)
     {
          for (int i = 0; i < currentWord.size(); i++)
          {
               char ch = currentWord[i];
               scoreForCurrentElement += m[ch].second;
               m[ch] = make_pair(m[ch].first - 1, m[ch].second);
          }
     }
     int scoreWithCurrentWord = getMaxCount(words, scores, m, idx + 1);

     if (validWordFlag)
     {
          for (int i = 0; i < currentWord.size(); i++)
          {
               char ch = currentWord[i];
               m[ch] = make_pair(m[ch].first + 1, m[ch].second);
          }
     }

     return max(scoreWithoutCurrentWord, scoreForCurrentElement + scoreWithCurrentWord);
}

int main()
{
     map<char, pair<int, int>> m;
     vector<char> arr = {'a', 'b', 'c', 'd', 'd', 'd', 'g', 'o', 'o'};
     vector<int> scores = {1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
     vector<string> words = {"dog", "cat", "dad", "good"};
     for (int i = 0; i < arr.size(); i++)
     {
          char ch = arr[i];
          if (m.find(ch) != m.end())
          {
               m[ch] = make_pair(m[ch].first + 1, m[ch].second);
          }
          else
          {
               m[ch] = make_pair(1, scores[int(ch) - 97]);
          }
     }

     cout << getMaxCount(words, scores, m, 0);
     return 0;
}