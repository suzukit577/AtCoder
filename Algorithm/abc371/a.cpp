#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if (a != b) {
        cout << "A" << endl;
    } else if (a == c) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
}