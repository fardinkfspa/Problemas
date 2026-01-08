#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt; cin >> tt;
    while(tt--){
        long long a,b,c; cin >> a >> b >> c;
        cout << ((c*b>=a) ? 2 : 1) << endl;
    }
return 0;
}