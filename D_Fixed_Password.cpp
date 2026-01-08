#include <bits/stdc++.h>

using namespace std;

void pass(int x){
    while(x != 1999){
        cout<< "Wrong" << endl;
        cin >> x;
    }
    
    cout << "Correct" << endl;

}

int main()
{
  int a;
  cin >> a;
  pass(a);
return 0;
}