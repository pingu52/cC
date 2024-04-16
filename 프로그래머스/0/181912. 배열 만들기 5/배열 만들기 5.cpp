#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string nums = "";
    
    for(int j = 0; j < intStrs.size(); j++) {
        for(int i = s; i < s + l; i++) {
            nums += intStrs[j][i];
        }
        int num = stoi(nums);
        if(num > k) {
            answer.emplace_back(num);
        }
        nums = "";
    }
    return answer;
}