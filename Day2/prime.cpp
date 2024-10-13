#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=true;
    if(n<=1){
        isPrime=false;
    }
    else{
        for(int i=2;i<=n-1;i++){
            if(n%10==0){
                isPrime=false;
                break;
            }

        }
    }

    if(isPrime) cout<<"Prime";
    else cout<<"Not prime";

return 0;

}