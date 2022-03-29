#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n; cin >> n;
    unordered_set<char> s;
    string str; cin >> str;
    for (int i = 0; i < n; i++) {
        s.insert(str[i]);
    }
    cout << s.size();
    return 0;
}