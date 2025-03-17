#include<iostream>
using namespace std;
int main(){
    int p; 
    cout << "Enter Amount" << endl;
    cin >> p;
    int r;
    cout << "Enter Rate of interest" << endl;
    cin >> r;
    int t;
    cout << "Enter time" << endl;
    cin >> t;
    cout << (p*r*t)/100 << endl;
}