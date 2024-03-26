#include <string>
#include <vector>

// Euclidean algorithm

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = (numer1 * denom2) + (numer2 * denom1);
    int denom = denom1 * denom2;
    
    int x = numer, y = denom, z = -1;
    while(x%y != 0){
        z = x % y;
        x = y;
        y = z;
    }
    answer.emplace_back(numer/y);
    answer.emplace_back(denom/y);
    return answer;
}