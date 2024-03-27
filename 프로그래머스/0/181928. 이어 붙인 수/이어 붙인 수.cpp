#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string sum1 = "", sum2 = "";
    for(int num : num_list){
        if(num % 2 == 0){
            sum1 += to_string(num);
        } else {
            sum2 += to_string(num);
        }
    }

    answer = stoi(sum1) + stoi(sum2);
    return answer;
}