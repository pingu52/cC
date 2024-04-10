#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    answer.emplace_back(n);
    while(n > 1) {
        if(n % 2 == 0) {
            n = n / 2;
        } else if (n % 2 != 0) {
            n = 3 * n + 1;
        }
        answer.emplace_back(n);
    }

    return answer;
}