// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     struct node*left;
//     struct node*right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };
// void preorder(node*root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node*root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(node*root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     node* root = new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//    // preorder(root);
//     inorder(root);
//     cout<<endl;
//     postorder(root);
// }
// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     struct node*left;
//     struct node* right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* build(int preorder[],int inorder[],int start,int end){
//     if(start>end){
//         return NULL;
//     }
//     static int i=0;
//     int curr=preorder[i];
//     node* n = new node(curr);
//     if(start==end){
//         return n;
//     }
//     search(inorder,start,end,curr);
//     build(preorder,inorder,start,curr-1);
//     build(preorder,inorder,curr+1,end);

// }
// node* inorderprint(node* root){
//     if(root==NULL){
//         return NULL;
//     }
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);

// }
// int main(){
//     int n;
//     cin>>n;
//     int preorder[n];
//     int inorder[n];
//     for(int i=0;i<n;i++){
//         cin>>preorder[i];
//     }
//     node* root=build(preorder,inorder,0,n-1);
//     inorderprint(root);
// }

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildtree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new node(data);
    cout<<"Enter data for left "<<endl;
    root->left = buildtree(root->left);
    cout<<"for right "<<endl;
    root->right = buildtree(root->right);
    return root;
}
void levelorder(node* root){
    if(root == NULL) return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp==NULL){//purana level complee traverse
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        
    }
}
int main(){
    node* root = NULL;
    root = buildtree(root);
    //1 2 3 4-1 -1 11 23 -1 -1 24 54
    levelorder(root);
    return 0;
}