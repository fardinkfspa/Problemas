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

void solve() {
    string s;
        cin >> s;
 
        bool all_same = true;
        for (char c : s) {
            if (c != s[0]) {
                all_same = false;
                break;
            }
        }
 
        if (all_same) {
            cout << "NO" << endl;
            
        }
 
        string r = s;
        sort(r.begin(), r.end());
 
        if (r == s) {
             
            for (int i = 1; i < r.size(); i++) {
                if (r[i] != r[0]) {
                    swap(r[0], r[i]);
                    break;
                }
            }
        }
 
        cout << "YES" << endl;
        cout << r << endl;
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