#include<iostream>
using namespace std;

int main()
{
  int T,sum=0;
  cin>>T;   //number of test cases we want
  for(int i=0;i<T;i++){
    int num;
    cin>>num;
    sum+=num;
 
  }
  cout<<sum;
  
   return 0;
}
