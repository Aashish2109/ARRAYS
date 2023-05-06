#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else if (a == 0)
    {
        return b;
    }
    else
        return gcd(b % a, a); // Either this or
    // return gcd(a, a % b); // This
}
int LCM(int a, int b)
{
    int LCM = a * b / gcd(a, b);
    return LCM;
}
int main()
{
    int a, b;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b);
    // cout << "The LCM of " << a << " and " << b << " is " << LCM(a, b);
}
// Output
//  Enter the first number:
//  4
//  Enter the second number:
//  6
//  The LCM of 4 and 6 is 12


// Enter the first number:
// 4
// Enter the second number:
// 6
// The GCD of 4 and 6 is 2