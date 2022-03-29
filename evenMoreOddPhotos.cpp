#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int even = 0;
    int odd = 0;
    int x;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) even++;
        else odd++;
    }
    x = min(even, odd);
    even -= x;
    odd -= x;
    count += x * 2;
    if (even > 0) count += 1;
    if (odd > 0 && odd == 1) count -= 1;
    else if (odd > 0 && odd % 3 == 2) count += (((odd + 1) / 3) * 2) - 1; 
    else if (odd > 0 && odd % 3 == 1) count += (((odd - 1) / 3) * 2) - 1; 
    else if (odd > 0 && odd % 3 == 0) count += ((odd) / 3) * 2; 
    cout << count;
    return 0;
}