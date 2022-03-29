#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int bucket[3];
    int c1, m1, c2, m2, c3, m3;
    cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
    bucket[0] = m1; bucket[1] = m2; bucket[2] = m3;
    for (int i = 0; i < 100; i++) {
        if (i % 3 == 0) {
            if (bucket[0] + bucket[1] < c2) {
                bucket[1]+= bucket[0];
                bucket[0] = 0;
            }
            else {
                bucket[0]-= c2 - bucket[1];
                bucket[1] = c2;
            }
        } else if (i % 3 == 1) {
            if (bucket[1] + bucket[2] < c3) {
                bucket[2]+= bucket[1];
                bucket[1] = 0;
            }
            else {
                bucket[1]-= c3 - bucket[2];
                bucket[2] = c3;
            }
        } else {
            if (bucket[2] + bucket[0] < c1) {
                bucket[0]+= bucket[2];
                bucket[2] = 0;
            }
            else {
                bucket[2]-= c1 - bucket[0];
                bucket[0] = c1;
            }
        }
    }
    cout << bucket[0] << endl << bucket[1] << endl << bucket[2] << endl;
    return 0;
}