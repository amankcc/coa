#include <bits/stdc++.h>
using namespace std;

void Half_Subtractor(int A, int B)
{
    int Difference, Borrow;
    Difference = A ^ B;

    A = not(A);
    Borrow = A & B;

    cout << "Difference = " << Difference << endl;
    cout << "Borrow = " << Borrow << endl;
}
int main()
{
    int a, b;

    cin >> a >> b;

    Half_Subtractor(a, b);
    return 0;
}
