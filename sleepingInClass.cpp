#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve() {
    int n; cin >> n;
    vector<int> v;
    for (int dig = 0; dig < n; dig++) {
        int x; cin >> x; v.push_back(x);
    }
    int target = *max_element(v.begin(), v.end());
    while (true) {
        int sum = 0;
        int merge = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
            merge++;
            if (sum > target) break;
            else if (sum == target) {
                sum = 0;
                merge--;
            }
        }
        if (sum == 0) return merge;
        target++;
    }
}

int main() {
    int t; cin >> t;
    for (int tests = 0; tests < t; tests++) {
        cout << solve() << endl;
    }

    return 0;
}