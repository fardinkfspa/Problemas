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
    string s; cin >> s;
    int l1 = -1, l2 = -1, l3 = -1;
    int ans = INT_MAX;
    ffor(i, s.length()){
        if (s[i] == '1') l1 = i;
        else if (s[i] == '2') l2 = i;
        else if (s[i] == '3') l3 = i;
        
        if (l1 != -1 && l2 != -1 && l3 != -1){
            int l = min(l1, min(l2, l3));
            ans = min(ans, i - l + 1);
        }
    }
    cout << (ans == INT_MAX ? 0 : ans) << endl;
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