#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define ffor(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve(){
    ll n; cin >> n;
    if (n == 1){
        cout << 0 << endl;
        return;
    }
    
    int cnt2 = 0, cnt3 = 0;

    while(n % 2 == 0){
        n /= 2;
        cnt2++;
    }
    while(n % 3 == 0){
        n /= 3;
        cnt3++;
    }
    if(n != 1 || cnt3 < cnt2){
        cout << -1 << "\n";
        return;
    }
    cout << cnt3 + (cnt3 - cnt2) << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}