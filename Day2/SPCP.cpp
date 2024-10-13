#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cp"<<endl;
    cin>>cp;
    cout<<"Enter sp"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit";
        cout<<"Profit made:"<<sp-cp;
    }
    else if(sp<cp){
        cout<<"Loss";
        cout<<"Loss encured:"<<cp-sp;
    }
    
    else if(sp=cp){
        cout<<"No profit no loss";
    }

}
