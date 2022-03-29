#include <iostream>
#include <cstdio>

using namespace std;

int main()  {
    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	int px1,py1,px2,py2; cin >>px1>>py1>>px2>>py2;
	int qx1,qy1,qx2,qy2; cin >>qx1>>qy1>>qx2>>qy2;
	px1 += 1000;
	py1 += 1000;
	px2 += 1000;
	py2 += 1000;
	qx1 += 1000;
	qy1 += 1000;
	qx2 += 1000;
	qy2 += 1000;
	int area = (px2 - px1) * (py2 - py1);
	int ar = 0;
	if (qx1 < px1 && qx2 > px2) ar = (min(qy2, py1) - max(qy1, py1)) * px2 - px1;
	if (qy1 < py1 && qy2 > py2) ar = (min(qx2, px1) - max(qx1, px1)) * py2 - py1;
	cout << max(area - ar, 0);
}