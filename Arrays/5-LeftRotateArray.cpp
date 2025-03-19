#include<iostream>
using namespace std;
void leftRotate(int (&arr)[5],int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main(){
    int arr[5];
    int n = 5;
    cout << "Enter elements of array" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    leftRotate(arr,n);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}