#include <bits/stdc++.h>
using namespace std;
void solve() {
    int A, B;
    char S;
    cin >> A >> S >> B;
    if ((S == '<' && A < B) || 
        (S == '>' && A > B) || 
        (S == '=' && A == B)) {        
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;}
