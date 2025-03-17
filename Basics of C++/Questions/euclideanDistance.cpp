#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x1, x2, y1, y2, dist;
    cout << "Enter x1 "<< endl;
    cin >> x1;
    cout << "Enter x2" << endl;
    cin >> x2;
    cout << "Enter y1" << endl;
    cin >> y1;
    cout << "Enter y2" << endl;
    cin >> y2;
    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout << "Dist is " << dist << endl;
}