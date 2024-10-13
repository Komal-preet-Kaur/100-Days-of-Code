#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter A:"<<endl;
    cin>>a;
    cout<<"Enter B:"<<endl;
    cin>>b;
    cout<<"Enter C:"<<endl;
    cin>>c;
    
    (a<b &&a<c)? cout<<"A is least":(b<c)? cout<<"B is least":cout<<"C is least";  
}