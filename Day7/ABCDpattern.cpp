// ABC
// ABC
// ABC
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the number:";
    cin>>n;
    for(i=65;i<=65+n;i++){
        for(j=65;j<=65+n;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
}