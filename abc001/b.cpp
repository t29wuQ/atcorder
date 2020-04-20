#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    double m;
    cin >> m;
    double km = m / 1000;
    string vv;
    ostringstream ss;
    if (km < 0.1) {
        vv = "00";
    } else if (km >= 0.1 && km <= 5) {
        int ans = km * 10;
        ss << ans;
        if (km < 1) {
            vv = "0";
        }
        vv += ss.str();
    } else if (km >= 6 && km <= 30) {
        int ans = km + 50;
        ss << ans;
        vv = ss.str();
    } else if (km >= 35 && km <= 70) {
        int ans = (km - 30) / 5 + 80;
        ss << ans;
        vv = ss.str();
    } else {
        vv = "89";
    }

    cout << vv << endl;
}