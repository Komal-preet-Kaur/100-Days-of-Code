#include<iostream>
using namespace std;
int main(){
    int n=12345;
    int sum=0;
    while(n!=0){
        int ld=n%10;// last digit extracted
        n=n/10; //last digit removed or we can say that we have extracted the rest of the digits
        sum=sum+ld;// addding the last digit of each itration to find the sum
    }
    cout<<sum<<endl;
}

