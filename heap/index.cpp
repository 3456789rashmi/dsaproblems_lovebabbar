#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;
    void insert(int val){
        size=size+1;
        int index=size;
        while(index>1){
            int parent=i/2;
            if(arr[parent]=index/2){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deletefromheap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int lefti = 2*i;
            int righti = 2*i+1;
            if(lefti<size && arr[i]<arr[lefti]){
                swap(arr[i],arr[lefti]);
                i=lefti;
            }
            else if(righti<size && arr[i]<arr[righti]){
                swap(arr[i],arr[righti]);
                i=righti;
            }
            else{
                return;
            }

        }
        
    }
    void heapify(int arr[],int n,int i){
        int largest = i;
        int lefti=2*i;
        int righti = 2*i+1;
        if(lefti<n && arr[lefti]>arr[largest]){
            largest=lefti;
        }
        if(righti<n && arr[righti]>arr[largest]){
            largest=righti;
        }
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
}