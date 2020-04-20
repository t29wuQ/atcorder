#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int deg;
    double dis;
    cin >> deg;
    cin >> dis;
    string dir;
    if (113 <= deg && 337 >= deg) {
        dir = "NNE";
    } else if (338 <= deg && 562 >= deg) {
        dir = "NE";
    } else if (563 <= deg && 787 >= deg) {
        dir = "ENE";
    } else if (788 <= deg && 1012 >= deg) {
        dir = "E";
    } else if (1013 <= deg && 1237 >= deg) {
        dir = "ESE";
    } else if (1238 <= deg && 1462 >= deg) {
        dir = "SE";
    } else if (1463 <= deg && 1687 >= deg) {
        dir = "SSE";
    } else if (1688 <= deg && 1912 >= deg) {
        dir = "S";
    } else if (1913 <= deg && 2137 >= deg) {
        dir = "SSW";
    } else if (2138 <= deg && 2362 >= deg) {
        dir = "SW";
    } else if (2363 <= deg && 2587 >= deg) {
        dir = "WSW";
    } else if (2588 <= deg && 2812 >= deg) {
        dir = "W";
    } else if (2813 <= deg && 3037 >= deg) {
        dir = "WNW";
    } else if (3038 <= deg && 3262 >= deg) {
        dir = "NW";
    } else if (3263 <= deg && 3487 >= deg) {
        dir = "NNW";
    } else {
        dir = "N";
    }
    int w;
    double ms = dis / 60;
    ms *= 10;
    ms = round(ms);
    ms /= 10;
    if (0 <= ms && 0.2 >= ms) {
        w = 0;
        dir = "C";
    } else if (0.3 <= ms && 1.5 >= ms) {
        w = 1;
    } else if (1.6 <= ms && 3.3 >= ms) {
        w = 2;
    }else if (3.4 <= ms && 5.4 >= ms) {
        w = 3;
    }else if (5.5 <= ms && 7.9 >= ms) {
        w = 4;
    }else if (8.0 <= ms && 10.7 >= ms) {
        w = 5;
    }else if (10.8 <= ms && 13.8 >= ms) {
        w = 6;
    }else if (13.9 <= ms && 17.1 >= ms) {
        w = 7;
    }else if (17.2 <= ms && 20.7 >= ms) {
        w = 8;
    }else if (20.8 <= ms && 24.4 >= ms) {
        w = 9;
    }else if (24.5 <= ms && 28.4 >= ms) {
        w = 10;
    }else if (28.5 <= ms && 32.6 >= ms) {
        w = 11;
    } else {
        w = 12;
    }

    cout << dir << " " << w << endl;
}