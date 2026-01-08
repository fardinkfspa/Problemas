#include <bits/stdc++.h>
using namespace std;
#define ffor(a, c) for (int(a) = 0; (a) < (c); (a)++)
int main(){
    int n; cin >> n;
    string str; cin >> str;
    int a = 0,d = 0;
    ffor(i,n){
        if(str[i]=='A'){a++;}
        else{d++;}
    }
    if(a>d){cout << "Anton" << endl;}
    else if(d>a){cout << "Danik" << endl;}
    else{cout << "Friendship" << endl;}
return 0;
}