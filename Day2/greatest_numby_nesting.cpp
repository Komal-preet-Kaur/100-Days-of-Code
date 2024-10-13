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
    
    if(a>b){        // a>b
        if(a>c){
            cout<<a<<" is greatest";        //a>c and a>b
        }
        else
            cout<<c<<" is greatest";
    }
    else{       //b>a
    if(b>a){
        cout<<b<<" is greatest";        //b >c
    }
    else{
        cout<<c<<" is greatest";
    }
    }
}