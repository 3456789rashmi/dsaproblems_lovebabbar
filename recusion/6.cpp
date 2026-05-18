#include<iostream>
using namespace std;
void bubble(int arr[],int i,int j){
    if(i>j){
        return ;
    }
    int n = j+1;
    // bubble(arr,i+1,j);
    for(int k=0;k<n-i;k++){
        if(arr[k]>arr[k+1]){
            swap(arr[k],arr[k+1]);
        }
    }
}
int main(){
    int arr[7] = {3,5,1,2,6,7,4};
    bubble(arr,1,8);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}