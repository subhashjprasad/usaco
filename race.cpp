#include <iostream>
#include <cstdio>

using namespace std;

int solve(int k) {
        int x; cin >> x;
        int count = 0;
        int step = 0;
        int ltrav = 0;
        int rtrav = 0;
        while (true) {
            count++;
            step++;
            ltrav += step;
            if (ltrav + rtrav >= k) return count;
            if (step >= x) {
                rtrav += step;
                count++;
                if (ltrav + rtrav >= k) return count;
            }
        }
}

int main() {
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);
    int k, n; cin >> k >> n;
    while (n > 0) {
        cout << solve(k) << endl;
        n--;
    }
    return 0;
}