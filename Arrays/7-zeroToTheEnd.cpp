#include<iostream>
using namespace std;
void moveZeroes(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        if (arr[i] != 0){
            i++;
        }
        else if(arr[i] == 0){
            swap(arr[i],arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[] ={1,0,2,3,2,0,0,4,5,1};
    int n = 10;
    moveZeroes(arr,n);
    for(int i = 0; i< 10; i++) {
        cout << arr[i] << " ";
    }
}