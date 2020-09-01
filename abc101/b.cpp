#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    string strN = to_string(N);
    int S = 0;
    for (int i = 0; i < strN.size(); ++i) {
        S += (int)strN[i] - '0';
    }
    if ((N % S) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}