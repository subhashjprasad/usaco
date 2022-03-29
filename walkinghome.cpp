#include <iostream>
#include <algorithm>

using namespace std;

int paths;

int farm[50][50];

void search(int x, int y, int n, int k, string path) {
    if ((x == n - 1) && (y == n - 1)) {
        paths++;
    }
    else {
        
        if (path[path.length() - 1] == 'R') {
            if ((x + 1 < n) && (farm[x + 1][y] == 0)) search(x + 1, y, n, k, path + "R");
            
            if ((k > 0) && (y + 1 < n) && (farm[x][y + 1] == 0)) search(x, y + 1, n, k - 1, path + "D");

        } else if (path[path.length() - 1] == 'D') {
            if ((y + 1 < n) && (farm[x][y + 1] == 0)) search(x, y + 1, n, k, path + "D");

            if ((k > 0) && (x + 1 < n) && (farm[x + 1][y] == 0)) search(x + 1, y, n, k - 1, path + "R");
        } else {
            if ((x + 1 < n) && (farm[x + 1][y] == 0)) search(x + 1, y, n, k, path + "R");

            if ((y + 1 < n) && (farm[x][y + 1] == 0)) search(x, y + 1, n, k, path + "D");
        }

    }

}

int main() {

    int t;

    cin >> t;

    for (int c = 0; c < t; c++) {

        int n, k;

        cin >> n;
        cin >> k;

        string s;

        for (int j = 0; j < n; j++) {
            cin >> s;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == 'H') farm[i][j] = 1;
                else farm[i][j] = 0;
            }
        }

        paths = 0;

        string path = "";

        search(0, 0, n, k, path);

        cout << paths << endl;

    }

}