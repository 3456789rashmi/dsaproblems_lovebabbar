// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     double sum=0;
//     int count=0;
//     for(int i=0;i<n;i+=2){
        
//         sum+=arr[i];
//         count++;
//     }
//     double avg = (double)sum/count;
//     cout<<avg;
   
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int l,r;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>l>>r;
//     int count=0;
//     for(int i=r;i>l;i--){
//         if(i>l && i<r){
//             count++;
//         }
//     }
//     cout<<count;
// }
// #include<iostream>
// using namespace std;
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void swapalternate(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// int main(){
//     int even[8] = {5,2,9,7,6,1,0,4};
//     int odd[5] = {11,33,8,76,43};
//     swapalternate(even,8);
//     printarray(even,8);
//     cout<<endl;
//     swapalternate(odd,5);
//     printarray(odd,5);

// }
//no.which is unique in list
// #include<iostream>
// using namespace std;
// int findUniue(int *arr,int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int t = findUniue(arr,n);
//     cout<<t;
// }
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int key){
//     int start = 0;
//     int end = size-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;
// }
// int main(){
//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,23,16};
//     int index = binarySearch(even,6,20);
//     int odd
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         int min = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<min){
//                 min=j;
//             }
//             swap(arr[min],arr[i]);
//         }
//     }
// }
//#include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"size: "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"size: "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"size: "<<v.capacity()<<endl;
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"before pop"<<endl;
//     cout<<"front:"<<v.front()<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }

// }
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     cout<<endl;
//     cout<<"print first index element: "<<d.at(1)<<endl;
//     cout<<"front: "<<d.front()<<endl;
//     cout<<"back: "<<d.back()<<endl;

// }
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l;
//     list<int> n(5,100);
//     l.push_back(1);
//     l.push_front(2);
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"after erase: "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution{
//     public:
//     void movezeroes(vector<int> & nums){
//         int i=0;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]!=0){
//                 swap(nums[j],nums[i]);
//                 i++;
//             }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int getMax(int a,int b){
//     return (a>b) ? a:b;
// }
// int main(){
//     int a=1,b=2;
//     int ans = 0;
//    ans = getMax(a,b);
//     a=a+3;
//     b=b+1;
// ans=getMax(a,b);
// cout<<ans<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int j,key;
//     for(int i=1;i<n;i++){
//          key=arr[i];
//         j=j-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=key;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
 
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//             }
//             if(min!=i){
//                 int temp=arr[i];
//                 arr[i]=arr[min];
//                 arr[min]=temp;
//             }
    
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     struct node* next;
//     node(int val)
//     {
//         data= val;
//         next = NULL;
//     }
// };

// struct node* insertAthead(node* head, int val) //add nodes at head so nodes are added by left side
// {
//     node *n = new node(val);
//     n->next = head;
//     head= n;
//     return head;
// }
//or

// void insertAthead(node* &head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head= n;
// }

// void display(node* head)
// {
//     node *temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main()
// {
//     node* head = NULL; //no node yet just head to null
//     int n;
//     cin>>n;
//     for(int i =0; i<n; i++)
//     {
//         int a;
//         cin>>a;
//         head = insertAthead(head,a);
//     }
//     display(head);
// }

// #include <iostream>
// using namespace std;

// struct node {
//     int data;
//     struct node* next;
//     node(int v) {
//         data = v;
//         next = NULL;
//     }
// };

// struct node* insertAtHead(node* head, int v) {
//     node* n = new node(v);
//     n->next = head;
//     head=n;
//     return n;
// };
// void display(node* head) {
//     node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// int main() {
//     node* head = NULL;
//     head = insertAtHead(head, 10);
//     head = insertAtHead(head, 5);
//     head = insertAtHead(head, 0);
//     display(head);
//     return 0;
// }

#include<iostream>
using namespace std;
struct node *insertAtHead(node *head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;
    return head;
}
struct node *insertAtEnd(node *head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
    }
        else{
            node *temp=head;
            while(temp->next!=NULL){
            temp=temp->next;
            }
            temp->next=n;
        }
        return head;
    }

struct node {
    int data;
    struct node* next;
    node(int v) {
        data = v;
        next = NULL;
    }
};
struct node* Deletionatend(node *head){
    struct node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    };
    node *n=temp->next;
    delete n;
    return head;
}
void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<NULL<<endl;
}
int main(){
    node *head=NULL;
    head=Deletionatend(head);
}

