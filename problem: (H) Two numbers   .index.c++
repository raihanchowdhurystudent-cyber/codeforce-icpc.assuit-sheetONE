#include <bits/stdc++.h>
using namespace std;
int main() {
  
    double A, B;
    cin >> A >> B;
    
    double division_result = A / B;
    
    long long floor_result = floor(division_result);
    long long ceil_result = ceil(division_result);
    long long round_result = round(division_result);
    
    cout << "floor " << (int)A << " / " << (int)B << " = " << floor_result << endl;
    cout << "ceil " << (int)A << " / " << (int)B << " = " << ceil_result << endl;
    cout << "round " << (int)A << " / " << (int)B << " = " << round_result << endl;
    
    return 0;
}
