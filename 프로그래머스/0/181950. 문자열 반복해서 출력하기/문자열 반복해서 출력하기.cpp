#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    int n;
    cin >> str >> n;
    while(n > 0){
        cout << str << "";
        n--;
    }
    return 0;
}