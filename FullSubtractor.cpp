#include <bits/stdc++.h>
using namespace std;

void Full_Subtractor(int A, int B, int Bin)
{

    int Difference = (A ^ B) ^ Bin;

    int A1 = not(A);

    int B_Out = A1 & Bin | A1 & B | B & Bin;

    cout << "Difference = " << Difference << endl;
    cout << "B-Out = " << B_Out << endl;
}

int main()
{
    int a, b;

    cin >> a >> b;

    int Bin = 1;

    Full_Subtractor(a, b, Bin);
    return 0;
}
