#include<iostream>
using namespace std;
int factorial(int x){
      int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    factorial(n);
    factorial(r);
    factorial(n-r);
    cout<<factorial(n)/factorial(n-r);
}