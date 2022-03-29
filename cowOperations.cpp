#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s; cin >> s;
    int Q; cin >> Q;
    string res = "";
    for (int z = 0; z < Q; z++) {
        int l; cin >> l; l--; int r; cin >> r;
        int c = count(s.begin() + l, s.begin() + r, 'C'); 
        int o = count(s.begin() + l, s.begin() + r, 'O'); 
        if ((r - l - c) % 2 == 0) {
            if (o % 2 != c % 2) res += "Y";
            else res += "N";
        } else res += "N";
    }
    cout << res;
    return 0;
}