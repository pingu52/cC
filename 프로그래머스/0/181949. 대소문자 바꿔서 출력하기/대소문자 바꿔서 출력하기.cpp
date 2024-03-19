#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char *argv[]) {
  string str;
  cin >> str;

  for (int i = 0; i < str.size(); i++) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else if (islower(str[i])) {
      str[i] = toupper(str[i]);
    }
    cout << str[i];
  }
}