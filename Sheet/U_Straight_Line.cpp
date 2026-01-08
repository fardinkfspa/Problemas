#include <bits/stdc++.h>

using namespace std;

void straight()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    int m1 = (y2 - y1) / (x2 - x1);
    int m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    straight();
    return 0;
}