//fardin_000
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        int a,b,c; cin >> a >> b >> c;
        bool flag = false;
        bool flat = false;
        if(a+b == c){
            flag = true;
        }
        else if(a-b == c){
            flat = true;
        }

        if(flag){
            cout << "+" << endl;
        }
        else if(flat){
            cout << "-" << endl;
        }
    }
    return 0;
}