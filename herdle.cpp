#include <iostream>
#include <algorithm>

using namespace std;

char inttoASCII(int num) {
    return char(num + 65);
}

int main() {
    string ans;
    string temp;
    cin >> temp; ans += temp;
    cin >> temp; ans += temp;
    cin >> temp; ans += temp;
    string guess;
    cin >> temp; guess += temp;
    cin >> temp; guess += temp;
    cin >> temp; guess += temp;
    int green = 0;
    for (int i = 0; i < 9; i++) {
        if (ans[i] == guess[i]){
            green++;
        }
    }
    int yellow = 0;
    for(int j = 0; j < 26; j++) {
            yellow += min(count(guess.begin(), guess.end(), inttoASCII(j)), count(ans.begin(), ans.end(), inttoASCII(j)));
    }
    cout << green << endl << yellow - green;
    return 0;
}