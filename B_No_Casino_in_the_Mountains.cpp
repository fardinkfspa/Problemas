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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int n, hike_cycle;
        cin >> n >> hike_cycle;
        int arr[n];
        ffor(i, n) cin >> arr[i];

        int cnt = 0;
        int ans = 0;  
        ffor(i, n){
            if(arr[i] == 0){
                cnt++;
            } 
            else {
                ans += (cnt + 1) / (hike_cycle + 1);
                cnt = 0;
            }
        }
        ans += (cnt + 1) / (hike_cycle + 1);
        cout << ans << endl;
    }
    return 0;
}
