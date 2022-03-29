#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, tx1, ty1, tx2, ty2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2 >> tx1 >> ty1 >> tx2 >> ty2;
    int a_over = max((min(ax2, tx2) - max(ax1, tx1)), 0) * max((min(ay2, ty2) - max(ay1, ty1)), 0);
    int b_over = max((min(bx2, tx2) - max(bx1, tx1)), 0) * max((min(by2, ty2) - max(by1, ty1)), 0);
    cout << ((ax2 - ax1) * (ay2 - ay1)) + ((bx2 - bx1) * (by2 - by1)) - (a_over + b_over) << endl;
}