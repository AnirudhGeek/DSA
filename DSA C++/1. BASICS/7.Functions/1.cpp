#include<bits/stdc++.h>
using namespace std;
void printName(string name){
     cout << "Hey " << name << endl;
}
int main(){
    string name,name2;
    cout << "Enter the name: ";
    cin >> name;
    printName(name);
    cin >> name2;
    printName(name2);
    return 0;
}