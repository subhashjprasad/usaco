#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long LL;

int main() {
    vector<LL> nums;
    LL x;
    for (int i = 0; i < 7; i++) {
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    LL a, b, c;
    a = nums[0];
    nums.erase(nums.begin());
    b = nums[0];
    nums.erase(nums.begin());
    if (nums[0] == a + b) {
        nums.erase(nums.begin());
        c = nums[0];
    } else c = nums[0];
    cout << a << " " << b << " " << c;
    return 0;
}