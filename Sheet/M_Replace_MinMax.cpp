// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>  n;
    int arr[n];
    for (int  i = 0; i < n; i++){
           cin >> arr[i]; 
    }
    
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    int tmp;
    for (int i = 0; i < n; i++){
            if(arr[i]=max){
                tmp = arr[max];
                arr[min] = arr[max];
                arr[max] = tmp;
            }  
    }
    

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    
    
    
return 0;
}