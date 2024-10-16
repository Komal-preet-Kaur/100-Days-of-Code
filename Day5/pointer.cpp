//solved on hacker rank
#include <iostream>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    int *pa=&a;
    int *pb=&b;
    
    int sum=(*pa)+ (*pb);
    int diff=abs(*pa-*pb);
    //update the values of pointers 
    *pa=sum;
    *pb=diff;
    cout<<*pa<<endl<<*pb;
    return 0;
}
