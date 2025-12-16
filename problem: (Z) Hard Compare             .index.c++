#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long A_ll, B_ll, C_ll, D_ll;
    cin >> A_ll >> B_ll >> C_ll >> D_ll;
    long double A = (long double)A_ll;
    long double B = (long double)B_ll;
    long double C = (long double)C_ll;
    long double D = (long double)D_ll;
    long double left_side = B * log(A);  
    long double right_side = D * log(C); 
    if (left_side > right_side) {
        cout << "YES" << endl; } else {
        cout << "NO" << endl; }}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
