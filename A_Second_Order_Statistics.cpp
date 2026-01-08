//fardin_000
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    bool flag = false;
    for (int i = 0; i < n; i++){
        if (v[i] != v[0]) {
            cout << v[i] << endl;
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << "NO" << endl;
    }
return 0;
}