#include <bits/stdc++.h>
using namespace std;
void solve() {
    int A, B, C;
    char S, Q; 
    cin >> A >> S >> B >> Q >> C; 
    int result;
    
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else if (S == '*') {
        result = A * B;}
    
    if (result == C) {
    cout << "Yes" << endl;
    } else { cout << result << endl;   }  }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;}
