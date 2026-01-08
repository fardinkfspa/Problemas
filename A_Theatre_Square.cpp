//fardin_000
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a; cin >> n >> m >> a;
    long long length = ceil((double)n/a);
    long long width = ceil((double)m/a);
    cout << length*width << endl;
return 0;
}