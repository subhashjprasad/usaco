#include <iostream>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    long long sum = w * (k + k * w) / 2;
    if (sum - n > 0) cout << sum - n;
    else cout << 0;
    return 0;
}