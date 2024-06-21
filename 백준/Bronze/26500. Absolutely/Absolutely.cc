#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    double a, b;
    cin >> a >> b;
    double dist = abs(a - b);
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << dist << endl;
  }

  return 0;
}
