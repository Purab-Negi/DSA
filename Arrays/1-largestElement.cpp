#include<iostream>
using namespace std;
int largestElement(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if (largest < arr[i]){
            largest = arr [i];
        }
    }
    return largest;
}
int main(){
    int arr[] ={3,4,5,0,6,1,-3};
    int n = 7;
    cout << largestElement(arr,n);
}