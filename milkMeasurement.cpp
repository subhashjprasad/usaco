#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <tuple>

using namespace std;

struct mes {
    int day;
    string name;
    int change;

    mes(int d, string n, int c) {
        day = d;
        name = n;
        change = c;
    }
};

bool compare(const mes &a, const mes &b) {
    return a.day < b.day;
}

int main() {
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    int B = 7, E = 7, M = 7;
    int N;
    cin >> N;
    vector<mes> values;
    for (int i = 0; i < N; i++) {
        int day;
        string name;
        int change;
        cin >> day;
        cin >> name;
        cin >> change;

        struct mes m = mes(day, name, change);
        values.push_back(m);
    }
    sort(values.begin(), values.end(), compare);
    bool dis[3];
    dis[0] = true;
    dis[1] = true;
    dis[2] = true;
    bool bef[3];
    int count = 0;
    for (int i = 0; i < values.size(); i++) {
        bef[0] = dis[0];
        bef[1] = dis[1];
        bef[2] = dis[2];
        if (values[i].name == "Bessie") B += values[i].change;
        if (values[i].name == "Elsie") E += values[i].change;
        if (values[i].name == "Mildred") M += values[i].change;
        if (B < max({B, E, M})) dis[0] = false;
        if (E < max({B, E, M})) dis[1] = false;
        if (M < max({B, E, M})) dis[2] = false;
        if (B == max({B, E, M})) dis[0] = true;
        if (E == max({B, E, M})) dis[1] = true;
        if (M == max({B, E, M})) dis[2] = true;
        if (dis[0] != bef[0] || dis[1] != bef[1] || dis[2] != bef[2]) count++;
    }
    cout << count;
    return 0;
}