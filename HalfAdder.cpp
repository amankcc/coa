#include <bits/stdc++.h>
using namespace std;

void Half_Adder(int a, int b)
{
    int sum, carry;

    sum = a ^ b;

    carry = a & b;

    cout << "Sum --> " << sum << endl;
    cout << "Carry --> " << carry << endl;
}

int main()
{
    int a, b;

    cin >> a >> b;

    Half_Adder(a, b);
    return 0;
}
