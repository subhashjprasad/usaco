#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    int n; cin >> n;
    int table[10][10];
    string x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x.size(); j++) {
            table[i][j] = stoi(x.substr(j, 1));
        }
    }
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if (table[i][j] == 1) {
                count++;
                for (int a = 0; a <= i; a++) {
                    for (int b = 0; b <= j; b++) {
                        if (table[a][b] == 0) table[a][b] = 1;
                        else table[a][b] = 0;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}