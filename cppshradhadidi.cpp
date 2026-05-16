#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec (5,0);
    // for(int i : vec){
    //     cout<<i<<endl;
    // }
    // vector<char>vec = {'a','b','c','d','e'};
    // cout<<"size: "<<vec.size()<<endl;
    // for(char val : vec){
    //     cout<<val<<endl;
    // }
    vector<int>vec;
    cout<<"size: "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(35);
    vec.push_back(35);
    vec.push_back(35);
    cout<<"size: "<<vec.size()<<endl;
    vec.pop_back();
    // for(int val : vec){
    //     cout<<val<<endl;
    // }
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(1)<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;


}