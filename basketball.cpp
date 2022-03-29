#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cin >> input;

    if (input[input.length() - 2] == 'A') cout << "A";
    else cout << "B";

    return 0;
}