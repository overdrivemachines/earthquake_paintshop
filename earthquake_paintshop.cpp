#include <iostream>
#include <vector>

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


vector<alphanumeric> sortedStrings(int N, vector<string> A) {

}