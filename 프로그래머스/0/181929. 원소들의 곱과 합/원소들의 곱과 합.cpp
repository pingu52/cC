#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int tmp1, tmp2 = 1;
    tmp1 = accumulate(num_list.begin(), num_list.end(), 0);
    tmp1 *= tmp1;
    for(int i = 0; i < num_list.size(); i++) {
        tmp2 *= num_list[i];
    }
    if(tmp1 > tmp2) {
        answer = 1;
    } else answer = 0;
    return answer;
}