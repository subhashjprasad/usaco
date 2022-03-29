#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int N; cin >> N;
    int M; cin >> M;
    int Narr[100] = {0}; int Marr[100] = {0};
    int ind = 0;
    for (int i = 0; i < N; i++) {
        int len; cin >> len;
        int speed; cin >> speed;
        for (int j = ind; j < ind + len; j++) {
            Narr[j] = speed;
        }
        ind += len;
    }
    ind = 0;
    for (int i = 0; i < M; i++) {
        int len; cin >> len;
        int speed; cin >> speed;
        for (int j = ind; j < ind + len; j++) {
            Marr[j] = speed;
        }
        ind += len;
    }
    int maxdiff = 0;
    for (int i = 0; i < 100; i++) {
        maxdiff = max(Marr[i] - Narr[i], maxdiff);
    }
    cout << maxdiff;
    return 0;
}