#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int max(vector<int> arr) {
  int max = arr[0]; // 1

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > max) { // 1
      max = arr[i]; // 1
    }
  } // 2n where n == arr.size()

  return max; // 1
} // 2n + 2 -> O(n)

vector<int> twoSums(vector<int> arr, int target) {
  int size = arr.size(); // 1
  
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i != j && arr[i] + arr[j] == target) { // 1
        return { i, j }; // 1
      }
    } // 2n
  } // n
  // 2n^2

  return { -1, -1 }; // 1
} // 2n^2 + 2 -> O(n^2)

vector<int> twoSumsOpt(vector<int> arr, int target) {
  // unordered_map<key, value>
  unordered_map<int, int> map; // 1

  // map[1] == 0
  // map[2] == 1
  // ...
  // map[5] == 4
  for (int i = 0; i < arr.size(); i++) {
    map[arr[i]] = i; // 1
  } // 1n

  for (int i = 0; i < arr.size(); i++) {
    int diff = target - arr[i]; // 1

    if (map.count(diff) > 0 && map[diff] != i) { // 1
      return { i, map[diff] }; // 1
    }
  } // 3n

  return { -1, -1 }; // 1
} // 1 + n + 3n + 1 -> 4n + 2 -> O(n)

int main() { 

  // Two Sums Problem
  vector<int> arr { 1, 2, 3, 4, 5 };
  int target = 6;
  
  cout << max(arr) << endl; 

  auto res = twoSumsOpt(arr, target);

  cout << res[0] << ", " << res[1] << endl;
}