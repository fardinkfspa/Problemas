//fardin_000
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        string n; cin >> n;
        sort(n.begin(),n.end());
        cout << n[0] << endl;
    }
    return 0;
}