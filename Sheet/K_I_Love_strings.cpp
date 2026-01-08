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
    while(tt--) {
        string str1,str2; cin >> str1 >> str2;
        int l1 = str1.size();
        int l2 = str2.size();
        int l = min(l1,l2);
         ffor(i, l) {
            cout << str1[i] << str2[i];
        }
        for(int i = l; i < l1; i++) {
            cout << str1[i];
        }
        for(int i = l; i < l2; i++) {
            cout << str2[i];
        }
        cout << '\n';
    }

    return 0;
}