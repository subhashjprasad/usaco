#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    string t; cin >> t;
    int Q; cin >> Q;
    string res = "";
    for (int z = 0; z < Q; z++) {
        string str; cin >> str;
        string ss = s;
        string tt = t;
        while (ss.find_first_not_of(str) != string::npos) {
            ss.erase(ss.begin() + ss.find_first_not_of(str));
        }
        while (tt.find_first_not_of(str) != string::npos) {
            tt.erase(tt.begin() + tt.find_first_not_of(str));
        }
        if (ss == tt) res += "Y";
        else res += "N";
    }
    cout << res;
    return 0;
}