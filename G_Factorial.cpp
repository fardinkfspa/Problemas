#include <bits/stdc++.h>

using namespace std;
long long factorial(int a)
{
    long long fact = 1;

    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        cout << factorial(a) << endl;
    }
    return 0;
}