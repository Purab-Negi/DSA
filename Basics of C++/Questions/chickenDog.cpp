#include <iostream>
using namespace std;
int main(){
    int head,leg,c,d;
    cout << "Enter head" << endl;
    cin >> head;
    cout << "Enter leg" << endl;
    cin >> leg;
    c =  (2*head - 0.5*leg);
    d = 4 - c;
    cout << c <<endl << d;
}