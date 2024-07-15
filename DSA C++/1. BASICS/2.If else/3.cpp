#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    if(age<18){
        cout << "Not Eligible for job";
    }
    else if(age<55){
        cout << "Eligible for job";
    }
    else{
        if(age>=55 && age<= 57){
            cout << " Eligible for job but Retirement Soon";
        }
        else if(age>57){
            cout << "Retirement Time";
        }
    }
    return 0;
}