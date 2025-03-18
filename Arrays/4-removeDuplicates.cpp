#include <iostream>
using namespace std;
int removeDuplicates(int arr[], int n){
    int i = 0;
    for(int j = 0; j < n; j++){
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr [] = {1,1,3,3,3,5};
    int n = 6;
    cout << removeDuplicates(arr,n);
}