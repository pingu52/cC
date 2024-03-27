#include <string>
#include <vector>

using namespace std;

string solution(string code) {
  string answer = "";
  bool mode = 0;
  string ret;

  for (int idx = 0; idx < code.length(); idx++) {
    if (mode == 0) {
      if (code[idx] != '1') {
        if (idx % 2 == 0) {
          ret.push_back(code[idx]);
        }
      } else if (code[idx] == '1') {
        mode = 1;
      }
    } else if (mode == 1) {
      if (code[idx] != '1') {
        if (idx % 2 != 0) {
          ret.push_back(code[idx]);
        }
      } else if (code[idx] == '1') {
        mode = 0;
      }
    }
  }
  if(ret.size() == 0) ret = "EMPTY";
  answer = ret;

  return answer;
}