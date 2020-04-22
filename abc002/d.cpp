#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int M;
    cin >> N;
    cin >> M;
    int xy[N][N];
    for (int i = 0; i < M; ++i) {
        int x;
        int y;
        cin >> x;
        cin >> y;
        --x;
        --y;
        xy[x][y] = 1;
        xy[y][x] = 1;
    }

    int sum = 1;
    for (int bit = 0; bit < (1 << N); ++bit) {
        vector<int> S;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                S.push_back(i);
            }
        }

        bool n = true;
        for (int x : S) {
            for (int y : S) {
                if (x == y) {
                    continue;
                }
                if (xy[x][y] != 1) {
                    n = false;
                    break;
                }
            }
        }
        if (n) {
            sum = max(sum, (int)S.size());
        }
    }
    
    cout << sum << endl;
}