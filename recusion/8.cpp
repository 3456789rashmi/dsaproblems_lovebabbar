#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt=0;
    for(int i=s;i<=e;i++){
        if(arr[i]>pivot){
            cnt++;
        }
    }

    int pindex = cnt+s;
    swap(arr[s],arr[pindex]);

    int i=s;
    int j=e;

    while(i<pindex && j>pindex){
        while(arr[i]<arr[pindex]){
            i++;
        }
        while(arr[j]>arr[pindex]){
            j--;
        }
        if(i<pindex && j>pindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pindex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int index = partition(arr,s,e);
    quicksort(arr,s,index-1);
    quicksort(arr,index+1,e);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}