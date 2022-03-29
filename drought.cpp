#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void determine(vector<long long> vals) {
    if (vals.size() < 2) {
        cout << 0 << endl;
        return;
    } else if (vals.size() == 2) {
        if (vals[0] == vals[1]) {
            cout << 0 << endl;
            return;
        } else {
            cout << -1 << endl;
            return;
        }
    }
    vector<long long> diffs;
    for (long long i = 0; i < vals.size() - 1; i++) {
        diffs.push_back(abs(vals[i + 1] - vals[i]));
    }
    long long maxind = distance(vals.begin(), max_element(vals.begin(), vals.end()));
    long long target;
    if (maxind > 0) target = vals[maxind - 1] - diffs[maxind];
    else target = vals[maxind + 2] - diffs[maxind];
    if (target < 0) {
        cout << -1 << endl;
        return;
    }
    if (target == 0) {
        cout << 0 << endl;
        return;
    }
    vector<long long> dist;
    for (long long i = 0; i < vals.size(); i++) {
        dist.push_back(vals[i] - target);
        if (dist[i] < 0) {
            cout << -1 << endl;
            return;
        }
    }
    long long sum = 0;
    for (long long i = 0; i < dist.size() / 2; i++) {
        dist[i + 1] -= dist[i];
        if (dist[i + 1] < 0) {
            cout << -1 << endl;
            return;
        }
        sum += dist[i];
        dist[i] = 0;
        dist[dist.size() - 2 - i] -= dist[dist.size() - 1 - i];
        if (dist[dist.size() - 2 - i] < 0) {
            cout << -1 << endl;
            return;
        }
        sum += dist[dist.size() - 1 - i];
        dist[dist.size() - 1 - i] = 0;
    }
    cout << sum * 2 << endl;
}

int main() {
    long long T; cin >> T;
    for (long long i = 0; i < T; i++) {
        long long N; cin >> N;
        vector<long long> vals;
        for (long long j = 0; j < N; j++) {
            long long x; cin >> x;
            vals.push_back(x);
        }
        determine(vals);
    }
    return 0;
}