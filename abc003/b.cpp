#include <iostream>
#include <string>

using namespace std;

bool atcoder(char c) {
    if (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r') {
        return true;
    }
    return false;
}

int main() {
    string win = "You can win";
    string lose = "You will lose";
    string S;
    string T;
    cin >> S;
    cin >> T;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == T[i]) {
            continue;
        }
        if (S[i] == '@') {
            if (atcoder(T[i])) {
                continue;
            } else {
                cout << lose << endl;
                return 0;
            }
        }
        if (T[i] == '@') {
            if (atcoder(S[i])) {
                continue;
            } else {
                cout << lose << endl;
                return 0;
            }
        }
        cout << lose << endl;
        return 0;
    }
    cout << win << endl;
}