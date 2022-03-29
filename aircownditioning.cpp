#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int len;

    cin >> len;

    int x;

    vector<int> target;
    vector<int> values;

    for (int i = 0; i < len; i++) {
        cin >> x;
        target.push_back(x);
    }

    for (int i = 0; i < len; i++) {
        cin >> x;
        values.push_back(x);
    }

    vector<int> diff;

    for (int i = 0; i < len; i++) {
        diff.push_back(target[i] - values[i]);
    }

    int low = 0;
    int high = diff.size() - 1;

    int inc;

    int count = 0;

    while (low < high) {
        if (diff[low] == 0) low++;
        if (diff[high] == 0) high--;

        if (abs(*max_element(diff.begin() + low, diff.begin() + high + 1)) > abs(*min_element(diff.begin() + low, diff.begin() + high + 1))) {
            for (int i = low; i <= high; i++) {
                diff[i] += abs(*max_element(diff.begin() + low, diff.begin() + high + 1));
            }
            count += abs(*max_element(diff.begin() + low, diff.begin() + high + 1));
        }
        else {
            for (int i = low; i <= high; i++) {
                diff[i] -= abs(*min_element(diff.begin() + low, diff.begin() + high + 1));
            }
            count += abs(*min_element(diff.begin() + low, diff.begin() + high + 1));
        }

    }

    cout << count << endl;

    return 0;
}