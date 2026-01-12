//fardin_000
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
    string s; cin >> s;
    ffor(i, n) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO" << endl;
            return;
        }
    }
    ll sum_1 = 0, sum_2 = 0;
    ffor(i, n/2){
        sum_1 += (s[i]-'0');  
    }
    for(int i = n/2; i < n; i++){ 
        sum_2 += (s[i]-'0');
    }
    if(sum_1 == sum_2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}