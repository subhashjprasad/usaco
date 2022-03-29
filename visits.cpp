#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

struct cow {
    long long id;
    long long a;
    long long v;

    bool operator < (const cow& c) {
        return v < c.v;
    }
};

int main() {
    long long N; cin >> N;
    vector<cow> input;
    for (long long i = 0; i < N; i++) {
        cow c;
        c.id = i + 1;
        cin >> c.a;
        cin >> c.v;
        input.push_back(c);
    }
    // do {
    //     for (long long i = 0; i < input.size(); i++) {
    //         cout << input[i].id << " ";
    //     }
    //     cout << endl;
    // } while (next_permutation(input.begin(), input.end()));

    sort(input.begin(), input.end());
    vector<cow> best;
    for (long long i = input.size() - 1; i >= 0; i--) {
        best.insert(best.begin(), input[input[i].a - 1]);
    }
    long long moos = 0;
    unordered_set<long long> s;
    for (long long i = 0; i < best.size(); i++) {
        if (s.count(best[i].a) == 0) {
            s.insert(best[i].id);
            moos += best[i].v;
        }
    }
    cout << moos;
    return 0;
}