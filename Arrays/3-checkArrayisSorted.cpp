#include <iostream>
using namespace std;
int checkSorted(int arr[], int n){
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false;
        }
    }
    return false;
}
int main(){
    int arr[4] = {2,4,5,7};
    cout << checkSorted(arr,4);
}