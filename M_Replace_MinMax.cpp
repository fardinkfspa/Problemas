#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[minIndex])
            minIndex = i;
        if (v[i] > v[maxIndex])
            maxIndex = i;
    }
    swap(v[minIndex], v[maxIndex]);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
