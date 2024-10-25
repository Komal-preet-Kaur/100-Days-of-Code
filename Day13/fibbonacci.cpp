#include<iostream>
using namespace std;
int main(){
    
    int t1=0,t2=1,next_term=0,n;
    cin>>n;
    cout<<"Fibbonacci series: "<<t1<<" "<<t2<<" ";
    next_term=t1+t2;
    while(next_term<=n){
       cout<<next_term<<" ";
    t1=t2;
    t2=next_term;
    next_term=t1+t2;
    
        
    }
    
}