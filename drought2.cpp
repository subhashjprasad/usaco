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
    long long d = 0;
    long long sum = 0;
    while (d <= vals[0]) {
        vector<long long> temp = vals;
        long long target = temp[0] - d;
        for (long long i = 0; i < temp.size() - 1; i++) {
            long long diff = temp[i] - d;
            temp[i] -= diff;
            temp[i + 1] -= diff;
            sum += diff;
            if (temp[i + 1] < target) {
                goto wc;
            }
        }
        cout << sum * 2 << endl;
        return;
        wc: d++;
    }
        
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