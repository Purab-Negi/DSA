#include<iostream>
using namespace std;
int main() {
    int n , sum;
    cout << "Enter n" << endl;
    cin >> n;
    sum = (n*(n+1)*(2*n +1))/6;
    cout << sum;
}