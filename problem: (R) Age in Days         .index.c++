#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, years, months, days;
    cin >> n;
    years = n / 365;
    n %= 365;
    months = n / 30;
    n %= 30;
    days = n;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";
    return 0;
}
