#include <bits/stdc++.h>
using namespace std;
#define ffor(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    int n,k; cin >> n >> k;
    vi v(n);
    ffor(i,n) cin >> v[i];
    int cnt = 0;
    ffor(i,n){
         if (v[i] >= v[k-1] && v[i] > 0){
            cnt++;
        }
    }
    cout << cnt << endl;
return 0;
}

