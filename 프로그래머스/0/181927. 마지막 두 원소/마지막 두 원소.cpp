#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int num : num_list) {
        answer.emplace_back(num);
    }
    if(num_list[num_list.size() - 1] > num_list[num_list.size() - 2]) {
        answer.emplace_back(num_list[num_list.size() - 1] - num_list[num_list.size() - 2]);
    } else {
        answer.emplace_back(num_list[num_list.size() - 1] * 2);
    }
    return answer;
}