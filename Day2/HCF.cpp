#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number whose factor you need to find"<<endl;
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
            break;
        }
    }

}