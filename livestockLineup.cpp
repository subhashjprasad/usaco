#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    int N; cin >> N;
    vector<pair<string, string>> constraints;
    for (int i = 0; i < N; i++) {
        string first; cin >> first;
        string second; cin >> second; cin >> second; cin >> second; cin >> second; cin >> second;
        constraints.push_back({first, second});
    }
    vector<string> perm;
    perm.push_back("Bessie");
    perm.push_back("Buttercup");
    perm.push_back("Belinda");
    perm.push_back("Beatrice");
    perm.push_back("Bella");
    perm.push_back("Blue");
    perm.push_back("Betsy");
    perm.push_back("Sue");
    sort(perm.begin(), perm.end());
    do {
        string p = "";
        for (int i = 0; i < 8; i++) {
            p += perm[i];
        }
        bool good = true;
        for (int i = 0; i < N; i++) {
            string cond1 = constraints[i].first + constraints[i].second;
            string cond2 = constraints[i].second + constraints[i].first;
            if (p.find(cond1) == string::npos && p.find(cond2) == string::npos) good = false;
        }
        if (good) {
            for (int i = 0; i < 8; i++) {
                cout << perm[i] << endl;
            }
            return 0;
        }
    } while (next_permutation(perm.begin(), perm.end()));
    return 0;
}