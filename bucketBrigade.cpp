#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    int bx, by, rx, ry, lx, ly;
    string str;
    for (int i = 0; i < 10; i++) {
        cin >> str;
        for (int j = 0; j < 10; j++) {
            if (str[j] == 'B') {
                bx = j;
                by = i;
            } else if (str[j] == 'R') {
                rx = j;
                ry = i;
            } else if (str[j] == 'L') {
                lx = j;
                ly = i;
            }
        }
    }
    if (((bx == lx && bx == rx) && ((ry > by && ry < ly) || (ry > ly && ry < by))) || ((by == ly && by == ry) && ((rx > bx && rx < lx) || (rx > lx && rx < bx)))) cout << abs(bx - lx) + abs(by - ly) + 1;
    else cout << abs(bx - lx) + abs(by - ly) - 1;
    return 0;
}