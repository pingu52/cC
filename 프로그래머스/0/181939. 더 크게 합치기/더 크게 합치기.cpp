#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string tmp1, tmp2;
    tmp1 = to_string(a) + to_string(b);
    tmp2 = to_string(b) + to_string(a);
    if(stoi(tmp1) > stoi (tmp2)) answer = stoi(tmp1);
    else answer = stoi(tmp2);
    
    return answer;
}