#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; a.push_back(x);
    }
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; b.push_back(x);
    }
    vector<int> d;
    for (int i = 0; i < n; i++) {
        auto it = find(b.begin(), b.end(), a[i]);
        int ind;
        if (it != b.end()) ind = it - b.begin();
        else cout << "not good";
        d.push_back(i - ind);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] > 0) ans++;
    }
    vector<int> md;
    for (int i = 0; i < n; i++) {
        if (d[i] <= 0) md.push_back(a[i]);
        else break;
    }
    vector<int> m;
    for (int i = 0; i < b.size(); i++) {
        auto it = find(md.begin(), md.end(), b[i]);
        int ind;
        if (it != md.end()) {
            ind = it - md.begin();
            m.push_back(b[i]);
        }
    }
    vector<int> diffs;
    for (int i = 0; i < m.size(); i++) {
        auto it = find(m.begin(), m.end(), md[i]);
        int ind;
        if (it != m.end()) ind = it - m.begin();
        else cout << "not good";
        diffs.push_back(i - ind);
    }
    for (int i = 0; i < diffs.size(); i++) {
        if (diffs[i] > 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}