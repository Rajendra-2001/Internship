#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;
string titleCase(string text)
{

  transform(text.begin(), text.end(), text.begin(), ::tolower);

  stringstream ss(text);
  string word;
  string result;

  while (ss >> word)
  {
    if (!word.empty())
    {
      word[0] = toupper(word[0]);
      result += word + " ";
    }
  }

  if (!result.empty() && result[result.size() - 1] == ' ')
  {
    result.pop_back();
  }

  return result;
}

int main()
{

  cout << "Enter a string: ";
  string userInput;
  getline(cin, userInput);

  string result = titleCase(userInput);
  cout << result << endl;

  return 0;
}
