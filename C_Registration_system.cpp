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
    int n; cin>> n;
    map<string,int> c;
    while(n--){
        string s; cin >> s;
        c[s];
        if(c[s]==0){
            cout<<"OK"<<endl;
            c[s]++;
        }
        else{
            cout<< s<< c[s]<<endl;
            c[s]++;
        }
    }
}