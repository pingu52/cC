#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for(const auto& wasd : control){
        if(wasd == 'w') answer += 1;
        else if (wasd == 's') answer -= 1;
        else if (wasd == 'a') answer -= 10;
        else if (wasd == 'd') answer += 10;
    }
    return answer;
}