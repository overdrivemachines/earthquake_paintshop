#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct alphanumeric {
    string name;
    int count;
};

vector<alphanumeric> sortedStrings(int N, vector<string> A);

int main(int argc, char const *argv[]) {

  int input_size = 3;
  vector<string> input;


  input.push_back("2234597891 zmxvvxbcij 8800654113 jihgfedcba");
  input.push_back("1234567891 abcdefghij 9876543219 jihgfedcba");
  input.push_back("2234597891 zmxvvxbcij 8800654113 jihgfedcba");

  vector<alphanumeric> ans = sortedStrings(input_size, input);

  for (auto u: ans) cout << u.name << " " << u.count << "\n";

  return 0;
}


// Sort the strings and find the number of times they appear
// Using map makes sorting easier as they are automatically sorted in c++
vector<alphanumeric> sortedStrings(int N, vector<string> A) {
  vector<alphanumeric> result;
  map<string, int> items;

  for (int i = 0; i < N; i++) {
    // cout << A[i] << "\n";
    if(items.count(A[i])) {
      // string already exists in map
      items[A[i]]++;
    } else {
      // make new entry in map
      items.insert({A[i], 1});
    }
  }

  // put the map in the vector if alphanumeric
  map<string, int>::iterator itr;
  for (itr = items.begin(); itr != items.end(); ++itr) {
    alphanumeric item;
    item.name = itr->first;
    item.count = itr->second;
    result.push_back(item);
  }

  return result;
}