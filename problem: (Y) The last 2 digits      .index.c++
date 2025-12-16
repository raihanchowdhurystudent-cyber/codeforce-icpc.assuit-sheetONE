#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long A, B, C, D;
    if (!(cin >> A >> B >> C >> D)) {
        return; }    
    long long mod_A = A % 100;
    long long mod_B = B % 100;
    long long mod_C = C % 100;
    long long mod_D = D % 100;
    long long product = 1;
    product = (product * mod_A) % 100;
    product = (product * mod_B) % 100;
    product = (product * mod_C) % 100;
    product = (product * mod_D) % 100;   
    if (product < 10) {
        cout << "0";  }
        cout << product << endl; }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;}
