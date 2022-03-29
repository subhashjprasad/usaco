#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int K; cin >> K;
    int N; cin >> N;
    int cows[20][10] = {0};
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            int num; cin >> num;
            cows[num - 1][i] = j;
        } 
    }
    int pairs = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int diff = cows[i][0] - cows[j][0];
            int sign;
            if (diff > 0) sign = 1;
            else sign = -1;
            bool ans = true;
            for (int n = 0; n < K; n++) {
                if (sign == 1) {
                    if (cows[i][n] - cows[j][n] < 0) ans = false;
                } else {
                    if (cows[i][n] - cows[j][n] > 0) ans = false;
                }
            }
            if (ans) pairs++;
        }
    }
    cout << pairs;
    return 0;
}