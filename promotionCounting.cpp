#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int bb, ba, sb, sa, gb, ga, pb, pa;
    cin >> bb >> ba >> sb >> sa >> gb >> ga >> pb >> pa;
    int bs, sg, gp;
    gp = pa - pb;
    sg = ga + gp - gb;
    bs = sa + sg - sb;
    cout << bs << endl << sg << endl << gp << endl;
    return 0;
}