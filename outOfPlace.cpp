#include <iostream>
#include <vector>
#include <set>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    int n; cin >> n;
    vector<int> vals;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        vals.push_back(x);
    }
    int swaps = -1;
    vector<int> sortedVals = vals;
    sort(sortedVals.begin(), sortedVals.end());
    for (int i = 0; i < vals.size(); i++) {
        if (vals[i] != sortedVals[i]) {
            swaps++;
        }
    }
    cout << max(0, swaps);
    return 0;
}