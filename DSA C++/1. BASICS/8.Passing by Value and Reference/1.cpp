//pass by value

#include <bits/stdc++.h>
using namespace std;

void doSomething(int num){
    num+=5;
    cout << num << "\n";
    num+=5;
    cout << num << "\n";
}

int main(){
    int num;
    cin >> num;
    doSomething(num);
    cout << num;
    return 0;
}