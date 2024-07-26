#include <iostream>
#include <vector>

using namespace std;

// Recursive function to flatten the nested vector
void flatten(const vector<vector<int>> &arr, vector<int> &result)
{
  for (const auto &elem : arr)
  {
    if (elem.empty())
      continue;
    if (elem.size() == 1 && !elem[0].empty())
    {
      result.push_back(elem[0]);
    }
    else
    {
      flatten(elem, result);
    }
  }
}

int main()
{
  // Define a nested vector
  vector<vector<int>> nestedArray = {{1}, {2, 3}, {4}, {5, {6}}};

  // Vector to hold the flattened array
  vector<int> flattenedArray;

  // Flatten the nested vector
  flatten(nestedArray, flattenedArray);

  // Print the flattened array
  for (int num : flattenedArray)
  {
    cout << num << " ";
  }

  return 0;
}
