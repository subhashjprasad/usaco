#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int fence[100];
    for (int i = 0; i < 100; i++) {
        fence[i] = 0;
    }
    for (int i = a; i < b; i++) {
        fence[i]++;
    }
    for (int i = c; i < d; i++) {
        fence[i]++;
    }
    int ans = 0;
    for (int i = 0; i < 100; i++) {
        if (fence[i] > 0) ans++;
    }
    cout << ans;
    return 0;
}