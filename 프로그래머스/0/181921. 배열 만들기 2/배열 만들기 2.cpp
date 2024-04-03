#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; i++) {
        string numStr = to_string(i);
        bool isZF = true; // 0, 5 판별
        for(char c : numStr) {
            if(c != '0' && c != '5') {
                isZF = false;
                break;
            }
        }
        if(isZF) {
            answer.emplace_back(i);
        }
    }
    if(answer.empty()) {
        answer.emplace_back(-1);
    }
    return answer;
}