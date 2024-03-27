#include <string>
#include <vector>

using namespace std;

int gcd(int x, int y) {
    if(y == 0) return x;
    else return gcd(y, x % y);
}

int solution(int n) {
    int answer = 0;
    int tmp = gcd(n, 6);
    answer = n / tmp;
    return answer;
}