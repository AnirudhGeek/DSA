//with void function

#include <bits/stdc++.h>
using namespace std;
void add(int num1,int num2){
    cout << num1+num2;
}
int main(){
    int num1,num2;
    cout << "Enter the Number: \n";
    cin >> num1 >> num2;
    add(num1,num2);
    return 0;
}