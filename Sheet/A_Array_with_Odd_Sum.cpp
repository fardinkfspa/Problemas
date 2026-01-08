#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++){
            sum+=arr[i];
        }
        if(sum%2==0){
            cout << "NO" << endl;
        }
        else{cout << "YES" <<endl;}
    }
return 0;
}