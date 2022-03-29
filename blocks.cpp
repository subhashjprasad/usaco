#include <iostream>
#include <vector>

using namespace std;

vector<int> vals;

void solve(string word, string bl[4], int n) {
    for (int i = 0; i < 4; i++) {
        if (bl[i].find(word.substr(0, 1)) != string::npos) {
            if (word.length() > 1) {
                string temp[4];
                for (int j = 0; j < 4; j++) {
                    temp[j] = bl[j];
                }
                temp[i] = "";
                solve(word.substr(1, word.length() - 1), temp, n);
            } else {
                vals[n] = 1;
            }
        }
    }
    
}

int main() {
    int n; cin >> n;
    string bl[4];
    for (int i = 0; i < 4; i++) {
        string s; cin >> s;
        bl[i] = s;
    }
    for (int i = 0; i < n; i++) {
        vals.push_back(0);
        string s; cin >> s;
        solve(s, bl, i);
    }
    for (int i = 0; i < vals.size(); i++) {
        if (vals[i] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}