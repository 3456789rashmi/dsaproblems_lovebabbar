#include<iostream>
using namespace std;
void merge(int* arr, int l, int r){
    int mid = (l+r)/2;
    int l1 = mid-l+1;
    int l2 = r-mid;
    int *temp1 = new int[l1];
    int *temp2 = new int[l2];
    for(int i=0;i<l1;i++){
        temp1[i]=arr[l+i];
    }
    for(int i=0;i<l2;i++){
        temp2[i]=arr[mid+1+i];
    }
    int index1=0;
    int index2=0;
    int newi=l;
    while(index1<l1 && index2<l2){
        if(temp1[index1]<temp2[index2]){
            arr[newi]=temp1[index1];
            index1++;
            newi++;
        }
        else{
            arr[newi] = temp2[index2];
            index2++;
            newi++;
        }
    }
    while(index1<l1){
        arr[newi] = temp1[index1];
        index1++;
        newi++;
    }
    while(index2<l2){
        arr[newi] = temp2[index2];
        index2++;
        newi++;
    }
    delete[] temp1;
    delete[] temp2;
}
void mergesort(int* arr, int l, int r){
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,r);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}