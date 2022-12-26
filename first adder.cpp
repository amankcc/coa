#include <bits/stdc++.h>
using namespace std;

void Full_Adder(int A, int B, int C_In)
{
    int Sum, C_Out;

    Sum = C_In ^ (A ^ B);

    C_Out = (A & B) | (B & C_In) | (A & C_In);

    cout << "Sum = " << Sum << endl;
    cout << "C-Out = " << C_Out << endl;
}

int main()
{
    int a, b;

    cin >> a >> b;

    int C_In = 0;

    Full_Adder(a, b, C_In);
    return 0;
}
