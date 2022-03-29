#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int met1 = abs(a - b);
    int met2 = 0;
    if (abs(x - a) < abs(y - a)) met2 += abs(x - a) + abs(y - b);
    else met2 += abs(y - a) + abs(x - b);
    cout << min(met1, met2);
    return 0;
}