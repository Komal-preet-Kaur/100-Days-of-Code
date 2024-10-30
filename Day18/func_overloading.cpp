//func overloadinf means using same name for more thanone function but different parameters
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int vol(int a){
    a*a*a;
}
int vol(int l ,int b, int h){
    return l*b*h;
}
int main(){
    cout<<"Sum of numbers is: "<< sum(3,9)<<endl;
    cout<<"Sum of numbers is:"<<sum(3,8,8)<<endl;
    cout<<"volume of cube is :"<<vol(8)<<endl;
    cout<<"volume of cuboid is:"<<vol(8,2,4)<<endl;
}