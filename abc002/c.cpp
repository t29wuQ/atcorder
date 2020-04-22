#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double p[6];
    for (int i = 0; i < 6; ++i) {
        cin >> p[i];
    }
    p[2] -= p[0];
    p[4] -= p[0];
    p[3] -= p[1];
    p[5] -= p[1];
    double a = (p[2] * p[5] - p[3] * p[4]) / 2; 
    if (a < 0) {
        a *= -1;
    }
    cout << fixed << a << endl;
}