//fardin_000
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        if(1900 <= n){
            cout << "Division 1" << endl;
        }
        else if(1600 <= n && n <= 1899){
            cout << "Division 2" << endl;
        }
        else if(1400 <= n && n <= 1599){
            cout << "Division 3" << endl;
        }
        else if(n <= 1399){
            cout << "Division 4" << endl;
        }
    }
    return 0;
}

// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399