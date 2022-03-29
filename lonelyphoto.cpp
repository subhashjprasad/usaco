#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    long long n;

    cin >> n;

    string line;

    cin >> line;

    string sub;

    int lonely = 0;
    int temp;

    for (int k = 3; k <= n; k++) {
        temp = lonely;

        for (int i = 0; i <= line.length() - k; i++) {
            sub = line.substr(i, k);

            if ((count(sub.begin(), sub.end(), 'G') == 1) || (count(sub.begin(), sub.end(), 'H') == 1)) lonely++;
        }

        if (lonely == temp) break;

    }

    cout << lonely << endl;

    return 0;

}