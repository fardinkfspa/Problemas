// https://codeforces.com/problemset/problem/2172/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr, arr + 3);   
    int mn = arr[0];
    int mx = arr[2];
    if (mx - mn >= 10) {
        cout << "check again" << endl;
    } else {
        cout << "final " << arr[1] << endl;
    }
    return 0;
}
