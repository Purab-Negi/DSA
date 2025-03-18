#include<iostream>
using namespace std;
int secondLargest(int arr[],int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1; i < n; i++){
        if(largest < arr[i]){
            slargest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && slargest < arr[i]){
            slargest = arr[i];
        }
    }
    return slargest;
}
int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = 6;
    cout << secondLargest(arr,n);
}