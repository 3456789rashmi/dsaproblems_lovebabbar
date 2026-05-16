// #include<iostream>
// using namespace std;
// #define n 20
// class queue{
//     int *arr;
//     int front;
//     int back;
//     public:
//     queue(){
//         arr=new int[n];
//         front=-1;
//         back=-1;
//     }
//     void push(int x){
//         if(back==n-1){
//             cout<<"queue is full"<<endl;
//             return;
//         }
//         back++;
//         arr[back]=x;
//         if(front==-1){
//             front++;
//         }
//     }
//     void pop(){
//         if(front==-1 || front>back){
//             cout<<"No more elements can be added"<<endl;
//             return;
//         }
//         front++;
//     }
//     int peek(){
//         if(front==-1 || front>back){
//             cout<<"No more elements can be added"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     bool empty(){
//         if(front==-1||front>back){
//             return true;
//         }
//         return false;
//         }
// };
// int main(){
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout<<q.peek()<<endl;
//     q.pop();
//         cout<<q.peek()<<endl;
// q.pop();
//     cout<<q.peek()<<endl;
// q.pop();

// }

// #include<iostream>
// using namespace std;
// class node{
//     int data;
//     node* next;
//     node(int val){
//         val=data;
//         next=NULL;
//     }
// };
// class queue{
//     node* front;
//     node* back;
//     queue(){
//         front=NULL;
//         back=NULL;
//     }
// }
#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot=arr[start];
    int lb=start;
    int ub=end;
    while(start<end){
        while(arr[lb]<pivot){
            lb++;
        }
        while(arr[ub]>pivot){
            ub--;
        }
        if(start<end){
            swap(arr[lb],arr[ub]);
        }
    }
    swap(arr[ub],arr[lb]);
    return ub;
}
void quicksort(int arr[],int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        quicksort(arr,start,p-1);
        quicksort(arr,p+1,end);
    }
}
int main(){
    int arr[8]={1,34,22,67,33,5,3,76};
    quicksort(arr,0,7);
}