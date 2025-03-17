#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x1, x2, y1, y2, sum;
    cout << "Enter x1 "<< endl;
    cin >> x1;
    cout << "Enter x2" << endl;
    cin >> x2;
    cout << "Enter y1" << endl;
    cin >> y1;
    cout << "Enter y2" << endl;
    cin >> y2;
    sum = ((x1*y2)+(x2*y1)) / (x2*y2);
    cout << "sum is " << sum << endl;
}