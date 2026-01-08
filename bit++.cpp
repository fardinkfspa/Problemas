#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x=0;
cin >> n;
for(int i=0; i < n; i++){

    string word;
    cin >> word;

    if(word.find("++") != string :: npos){
              x++;
    }
    else if(word.find("--") != string :: npos){
        x--;
    }
}
cout << x;
return 0;
}