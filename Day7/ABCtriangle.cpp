//A
//AB
//ABC
//ABCD
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2!=0){     //checking if i is odd
            for(j=1;j<=i;j++){
                cout<<j;
            }
        }
        else {  //i is even
            for(j=65;j<65+i;j++){   //for(j=0;j<i;j++)
                cout<<(char)j;      //cout<<(char)(j+65)
            }
        }
        cout<<endl;
    }
}