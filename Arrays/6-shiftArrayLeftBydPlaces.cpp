#include<iostream>
using namespace std;
void shiftLeft(int arr[], int n, int d){
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i< n; i++){
        arr[i] = temp[i-(n-d)];
    }
}
int main(){
    int arr[7];
    int n = 7;
    cout << "Enter elements of array" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cout << "Enter the no of places you want to shift";
    cin >> d;
    shiftLeft(arr,n,d);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}