#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<string> v;
    string x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    cout << v[0];
    int cur = v[0].length();
    for (int i = 1; i < v.size(); i++) {
        if (cur + v[i].length() <= k) {
            cout << " " << v[i];
            cur += v[i].length();
        }
        else {
            cout << endl << v[i];
            cur = v[i].length();
        }
    }
    return 0;
}