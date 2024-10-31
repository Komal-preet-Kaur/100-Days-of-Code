#include<iostream>
using namespace std;

class Emplyoee{

    private:
    int a,b,c;  //they cant be accessed directly in int main cause they are private 

    public:
    int d,e;
    void setData(int a,int b,int c);
    void getData(){
        cout<<"Value of a is:"<<a<<endl;
        cout<<"Value of b is:"<<b<<endl;
        cout<<"Value of c is:"<<c<<endl;
        cout<<"Value of d is:"<<d<<endl;
        cout<<"Value of e is:"<<e<<endl;
    }
    void Emplyoee :: setData(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
    }

    
};
int main(){
        Emplyoee harry;
        harry.d=34;
        harry.e=86;
        harry.setData(1,2,4);
        harry.getData();
        return 0;
    }