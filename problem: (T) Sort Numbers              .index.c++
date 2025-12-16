#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    const int original_A = A;
    const int original_B = B;
    const int original_C = C;
    if (A > B) {
        swap(A, B);
    }
    if (B > C) {
        swap(B, C);
    }
    if (A > B) {
        swap(A, B);
    }
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    cout << endl;   
    cout << original_A << endl;
    cout << original_B << endl;
    cout << original_C << endl;
    return 0;
}
