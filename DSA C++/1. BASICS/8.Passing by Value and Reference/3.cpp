//Arrays are automatically passes by reference

#include <bits/stdc++.h>
using namespace std;

void doSomething(int arr[],int n){
    arr[0]+=5;
    cout << "Value inside function: " << arr[0] <<'\n';
}

int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<=n-1;i=i+1){
        cin >> arr[i];
    }
    doSomething(arr,n);
    cout << "Value inside main function: " << arr[0] <<'\n';
    return 0;
}