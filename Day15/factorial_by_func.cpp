#include<iostream>
using namespace std;

int Fact(int n){
    int fac=1;
    for(int i=1;i<n;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    cout<<Fact(6);
}