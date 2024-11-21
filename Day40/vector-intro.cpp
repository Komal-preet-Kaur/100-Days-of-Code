#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  //declaring a vector
    cout<<"size:"<<v.size()<<endl;  //tells size befire pusing any element in it
    cout<<"Capacity:"<<v.capacity()<<endl;  //tels capacity which incr in power of 2 as the number of elements increases

    v.push_back(1);
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;

    // to resize the vector 

    v.resize(10);
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;

    // to delete last element
    v.pop_back();
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.pop_back();
    cout<<"size:"<<v.size()<<endl;  
    cout<<"Capacity:"<<v.capacity()<<endl;



}
