#include <iostream>

using namespace std;

struct die {

    int side[4] = {0};

    die(int aa, int bb, int cc, int dd) {
        side[0] = aa; side[1] = bb; side[2] = cc; side[3] = dd;
    }
};

bool win(die w, die l) {
    int wscore = 0;
    int lscore = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (w.side[i] > l.side[j]) wscore++;
            else if (w.side[i] < l.side[j]) lscore++;
        }
    }
    return (wscore > lscore);
}

bool check(die beat, die lose) {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            for (int k = 1; k <= 10; k++) {
                for (int l = 1; l <= 10; l++) {
                    die C(i, j, k, l);
                    if (win(C, beat) && win(lose, C)) return true;
                }  
            }
        }
    }
    return false;
}

int main() {
    int T; cin >> T;
    for (int n = 0; n < T; n++) {
        int a1, a2, a3, a4, b1, b2, b3, b4;
        cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;
        die A(a1, a2, a3, a4), B(b1, b2, b3, b4);
        die beat(0, 0, 0, 0), lose(0, 0, 0, 0);
        if (win(A, B)){
            beat = A;
            lose = B;
        } else {
            lose = A;
            beat = B;
        }
        if(check(beat, lose)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}