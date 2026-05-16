// #include<iostream>
// using namespace std;
// void printarray(int arr[15],int size){
//     cout<<"printing the array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"printing done"<<endl;
// }
// int main(){
//     int n[15];
//     cout<<"value of 14"<<n[14]<<endl;
//     int second[3] = {5,3,11};
//     cout<<"Value of 2 index: "<<second[2]<<endl;
//     int third[15]={2,7};
//     int m = 3;
//     cout<<"printing the array: "<<endl;
//     for(int i=0;i<m;i++){
//         cout<<third[i]<<" ";
//     }
//     int forth[10]={0};
//     int r=10;
//     cout<<"printing the array"<<endl;
//     for(int i=0;i<r;i++){
//         cout<<forth[i]<<" ";
//     }
//     int fifth[10]={1};
//     // int j=10;
//     // cout<<"printing the array"<<endl;
//     // for(int i=0;i<j;i++){
//     //     cout<<fifth[i]<<" ";
//     // }
//     int e = 10;
//     int fifthSize = sizeof(fifth)/sizeof(int);
//     cout<<"Sizeof fifth is "<<fifthSize<<endl;
//     char ch[5] = {};
//     cout<<endl<<"Everything is fine "<<endl<<endl;

// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int getMax(int num[],int n){
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max = num[i];
//         }
//     }
//     return max;
// }
// int getMin(int num[],int n){
//     int min = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(num[i]<min){
//             min = num[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int size;
//     cin>>size;
//     int n[100];
//     for(int i=0;i<size;i++){
//         cin>>n[i];
//     }
//     cout<<"Mx num is: "<<getMax(n,size)<<endl;
//         cout<<"Mx num is: "<<getMin(n,size)<<endl;

// }
// #include<iostream>
// using namespace std;
// void update(int arr[],int n){
//     cout<<"Inside the function"<<endl;
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     cout<<"going back to main function";
// }
// int main(){
//     int arr[3] = {1,2,3};
//     update(arr,3);
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// bool search(int arr[],int size,int key){

// }
// int main(){
// int arr[10];
// cout<<"Enter the elements"<<endl;
// int key;
// cin>>key;
// bool found = search(arr,10,key);
// if(found){
//     cout<<"present"<<endl;
// }
// else{
//     cout<<"absent";1 23 4 5 6
// }
// }
// #include<iostream>
// using namespace std;
// int main(){
// // int a[5] = {2,3,4,5,6};
// // for(int i=0;i<5;i++){
// //     cout<<a[i]<<" ";
// // }
// // return 0;
// // }
// // int n;
// // cin>>n;
// // int arr[n];
// // for(int i=0;i<n;i++){
// //     cin>>arr[i];
// // }
// // cout<<arr[4];
// // return 0;
// // }
// int array[10]={1,2,3,4,5};
// int newelement = 9;
// for(int i=6;i>1;i--){
//     array[i-1]=array[i-2];
// }
// array[0]=newelement;
// for(int i=0;i<6;i++){
//     cout<<array[i]<<" ";
// }
// return 0;
// }
//linear search
// #include<iostream>
// using namespace std;
// bool search(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//     }
//     }
//     return 0;
// }
// int main(){
//     int arr[50];
//     int key;
//     int size;
//     //     cout<<"enter the size of array";
//     cin>>size;
//     cin>>key;
//     //     cout<<"enter the elements of array";
//     for(int i=0;i<size;i++){
//     cin>>arr[i];
//     }
//     if(search(arr,size,key)){
//         cout<<"element found";
//     }
//     else{
//         cout<<"element not found";
//     }
// }
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//             start++;
//             end--;
//     }
// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int brr[5] = {2,3,6,7,8};
//     printarray(arr,6);
//     printarray(brr,5);
//     reverse(arr,6);
//     reverse(brr,5);

// }
//merging
// #include<iostream>
// using namespace std;
// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2 = r-mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=arr[mid+1+i];
//     }
//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]= a[i];
//             k++; i++;
//         }
//         else{
//             arr[k]=b[j];
//             k++; j++;
//         }
//     }
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]= a[i];
//             k++; i++;
//         }
//         else{
//             arr[k]=b[j];
//             k++; j++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         k++; i++;  
//     }
//     while(j<n2){
//         arr[k]=arr[j];
//         k++;j++;
//     }
// }
// void mergeSort(int arr[],int l,int r){
//     if(l<r){
//     int mid = (l+r)/2;
//     mergeSort(arr,l,mid);
//     mergeSort(arr,mid+1,r);

//     merge(arr,l,mid,r);
//     }
// }
// int main(){
// int arr[]={5,4,3,2,1};
// mergeSort(arr,0,4);
// for(int i=0;i<5;i++){
// cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// int main()
// {
//     int even[8]={5,2,9,4,7,6,1,0};
//     int odd[5]={11,33,4,56,77};
//     swapAlternate(even,8);
//     printArray(even,8);

// }
// #include<iostream>
// using namespace std;

//     inline int Max(int x,int y){
//         return (x>y)?x:y;
//     }
// int main(){
//     cout<<"Max(20,10):"<<Max(20,10)<<endl;
//     cout<<"Max(0,200):"<<Max(0,200)<<endl;
//     cout<<"Max(100,1010):"<<Max(100,1010)<<endl;
// return 0;

// }
#include<iostream>
using namespace std;
class operation{
    int a,b,add;
    public:
    void get(){
        cout<<"Enter first: ";
        cin>>a;
        cout<<"Enter second :";
        cin>>b;
    }
    void sum();

}s;
inline void operation::sum(){
    add=a+b;
    cout<<"Addition is:"<<a+b;
}
int main(){
    cout<<"Program using inline fun:\n";
    s.get();
    s.sum();
    return 0;
}