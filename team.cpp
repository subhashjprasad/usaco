#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p, v, t;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p + v + t >= 2) ans++;
    }
    cout << ans;
    return 0;
}