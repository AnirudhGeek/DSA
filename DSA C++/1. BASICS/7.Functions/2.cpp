//with main function
#include <bits/stdc++.h>
using namespace std;
int add(int num1,int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    cout << "Enter the Number: \n";
    cin >> num1 >> num2;
    int res = add(num1,num2);
    cout << res;
    return 0;
}