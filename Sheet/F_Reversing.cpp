#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tmp = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
} 