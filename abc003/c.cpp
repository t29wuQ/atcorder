#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    int K;
    cin >> N;
    cin >> K;
    int R[N];
    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }
    double C = 0;
    sort(R, R + N, greater<>());
    for (int i = K -1; i >= 0; --i) {
        C = (C + R[i]) / 2;
    }
    cout << fixed << C << endl;
}