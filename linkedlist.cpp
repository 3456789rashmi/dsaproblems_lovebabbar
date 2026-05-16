// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node * next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void InsertAthead(Node * &head,int d){
//     Node *temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void InsertAttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;
// }
// void insertAtposition(Node* &tail,Node* &head,int position,int d){
//     int count=1;
//     if(position==1){
//         InsertAthead(head,d);
//         return ;
//     }
//     Node* temp=head;
//     while(count<position-1){
//         temp=temp->next;
//         count++;
//     }
//     if(temp->next==NULL){
//         InsertAttail(tail,d);
//         return;
//     }
//     Node* nodetoinsert=new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
// }
// void print(Node* &head){
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node *node1=new Node(10);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;
//     Node* head=node1;
//     Node* tail=node1;
//     // print(head);
//     // InsertAthead(head,12);
//     // print(head);
//     //  InsertAthead(head,15);
//     // print(head);
//     print(head);
//     InsertAttail(tail,12);
//     print(head);
//      InsertAttail(tail,15);
//     print(head);
//     insertAtposition(tail,head,4,22);
//     print(head);
//     cout<<"head: "<<head->data<<endl;
//     cout<<"tail: "<<tail->data<<endl;

// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void insertathead(node* &head,int d){
//     node* temp = new node(d);
//     temp->next = head;
//     head=temp;
// }
// void insertattail(node* &tail,int d){
//     node* temp = new node(d);
//     tail->next=temp;
//     tail=temp;
// }
// void insertatpos(node* &head,node* &tail,int pos,int d){
//     if(pos==1){
//         insertathead(head,d);
//         return;
//     }
//     node* temp = head;
//     int cnt = 1;
//     if(temp->next==NULL){
//         insertattail(tail,d);
//         return ;
//     }
    
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     node* n=new node(d);
//     n->next = temp->next;
//     temp->next = n;
// }
// void deleteatpos(){
    
// }
// void print(node* &head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node* node1 = new node(10);
//     // cout<<node1->data <<endl;
//     // cout<<node1->next <<endl;
//     node* head = node1;
//     node* tail= node1;
//     print(head);
//     insertattail(tail,12);
//     print(head);
//     insertattail(tail,15);
//     print(head);
//     insertatpos(head,tail,4,22);
//     print(head);
// }








#include<iostream>
using namespace std;
void count_of_nodes(struct node* head){
    int count=0;
    if(head==NULL){
        cout<<"Linked list is empty";
    }
}