#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++) {
        int elm = 1000001;
        for(int j = queries[i][0]; j <= queries[i][1]; j++) {
            if(arr[j] > queries[i][2] && arr[j] < elm) {
                elm = arr[j];
            }
        }
        if(elm != 1000001) answer.emplace_back(elm);
        else answer.emplace_back(-1);
    }
    return answer;
}