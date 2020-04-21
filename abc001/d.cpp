#include <iostream>
#include <string>

using namespace std;

void printTime(int i) {
    int hour = i / 12;
    string hourStr;
    if (hour < 10) {
        hourStr = "0" + to_string(hour);
    } else {
        hourStr = to_string(hour);
    }
    int minute = (i % 12) * 5;
    string minStr;
    if (minute < 10) {
        minStr = "0" + to_string(minute);
    } else {
        minStr = to_string(minute);
    }
    cout << hourStr << minStr;
}

int main() {
    int N;
    cin >> N;
    int p[290] = {};
    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        int bmin = stoi(line.substr(2, 2));
        if ((bmin % 5) != 0)
            bmin -= bmin % 5;
        int amin = stoi(line.substr(7));
        int ahour = stoi(line.substr(5,2));
        if ((amin % 5) != 0)
            amin += 5 - amin % 5;
        if (amin == 60) {
            amin = 0;
            ahour++;
        }
        p[stoi(line.substr(0, 2)) * 12 + bmin / 5]++;
        p[ahour * 12 + amin / 5]--;
    }

    int sum = 0;
    for (int i = 0; i < 290; i++) {
        if (sum == 0 && p[i] >= 1) {
            printTime(i);
            cout << "-";
        } else if (sum == 0) {
            continue;
        }
        sum += p[i];
        if (sum <= 0) {
            printTime(i);
            cout << endl; 
            sum = 0;
        }
    }
}