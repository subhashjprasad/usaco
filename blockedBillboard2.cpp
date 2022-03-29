#include <iostream>
#include <cstdio>

using namespace std;

bool covered(int x, int y, int x1, int y1, int x2, int y2) {
	int ans = 0;
	if ((x1 <= x) && (x <= x2)) ans++;
	if ((y1 <= y) && (y <= y2)) ans++;
	if (ans == 2) return true;
	else return false;
}

int main()  {
    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
	int corners = 0;
	if (covered(x1, y1, x3, y3, x4, y4)) corners++;
	if (covered(x1, y2, x3, y3, x4, y4)) corners++;
	if (covered(x2, y1, x3, y3, x4, y4)) corners++;
	if (covered(x2, y2, x3, y3, x4, y4)) corners++;
	if (corners < 2) cout << (x2 - x1) * (y2 - y1) << endl;
	else if (corners == 2) cout << ((x2 - x1) * (y2 - y1)) - ((min(x4, x2) - max(x3, x1)) * (min(y4, y2) - max(y3, y1))) << endl;
	else cout << 0;
}