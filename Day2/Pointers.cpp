#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;// or int *b ; b=&a;
    // &-> address of operator
    cout<<"The add of a is:"<<&a<<endl;
    cout<<"The add of a is:"<<b;

    // * -> defrefernce operator
    cout<<"The value at add  b is:"<<*b;

    //Pointer to pointer 
    int ** c =&b;
    

}
//Pointer->data type which hold address of other data type


