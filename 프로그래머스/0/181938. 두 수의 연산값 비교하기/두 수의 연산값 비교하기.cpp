#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ab = to_string(a) + to_string(b);
    if(stoi(ab) > 2 * a * b) answer = stoi(ab);
    else answer = 2 * a * b;
    return answer;
}