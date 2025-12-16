#include <bits/stdc++.h>
using namespace std;
int main() {
    string x;
    cin >> x;
    char fd = x[0];
    int digitValue = fd - '0';
    if (digitValue % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    return 0;}
