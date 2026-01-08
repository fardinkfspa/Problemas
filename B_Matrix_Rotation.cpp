//https://codeforces.com/problemset/problem/1772/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        for (int i = 0; i < 4; i++) {
            if (a < b && c < d && a < c && b < d) {
                flag = true;
                break;
            }
            int na = c;
            int nb = a;
            int nc = d;
            int nd = b;
            a = na; b = nb; c = nc; d = nd;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
