#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (int i = 0; i < intStrs.size(); i++) {
        if (s + l <= intStrs[i].size()) {
            string nums = intStrs[i].substr(s, l);
            int num = stoi(nums);
            if (num > k) {
                answer.emplace_back(num);
            }
        }
    }
    return answer;
}