//fardin_000
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        string n; cin >> n;
        int sum = 0;
        for (int i = 0; i < 2; i++){
          sum += n[i]-'0';
        }
        cout << sum << endl;
    }
return 0;
}