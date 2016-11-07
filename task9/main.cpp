#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   string string;
   cin >> string;
   cout << boolalpha << all_of(begin(string), end(string), ::isxdigit) << endl;
}
