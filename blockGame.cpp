#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

char inttoASCII(int num) {
    return char(num + 97);
}

int main() {
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int copies[26] = {0};
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string first; cin >> first;
        string second; cin >> second;
        for(int j = 0; j < 26; j++) {
            copies[j] += max(count(first.begin(), first.end(), inttoASCII(j)), count(second.begin(), second.end(), inttoASCII(j)));
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << copies[i] << endl;
    }
    return 0;
}