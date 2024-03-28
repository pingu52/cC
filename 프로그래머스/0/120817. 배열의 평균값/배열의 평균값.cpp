#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for(const auto& num : numbers) {
        answer += num;
    }
    answer /= numbers.size();
    return answer;
}