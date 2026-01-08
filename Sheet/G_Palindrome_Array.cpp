#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int y = 0;
    
    int chk = n/2;
    
           for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < chk; i++){
        
            if(arr[i]==arr[(n-1)-i]){
             y++;   
        }
        
    }
    
    
   if(y==chk){
       cout << "YES" << endl;
   }
   else{
      cout << "NO" << endl;
   }
    
    
return 0;
}