#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    double sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += 10000 * i;
    }
    cout << sum / N << endl;
}