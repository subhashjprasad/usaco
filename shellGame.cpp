#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int N, shell[3], count[3];
    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
    cin >> N;
    for (int i = 0; i < 3; i++) {
        shell[i] = i;
    }
    for (int i = 0; i < N; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--; b--; g--;
        swap(shell[a], shell[b]);
        count[shell[g]]++;
    }
    cout << max({count[0], count[1], count[2]});
    return 0;
}