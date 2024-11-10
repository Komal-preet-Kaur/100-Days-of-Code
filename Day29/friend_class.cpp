#include<iostream>
using namespace std;

class Calculator{
    public:
    int add(int a,int b){
        return a+b;
    }

    int sumRealComplex(Complex ,Complex );  //declaring first 
};

class Complex{
    int a,b;
    //making sumRealComplex func get access to Complex class's variables by making friend fucntion
    friend int Calculator :: sumRealComplex(Complex o1,Complex o2);
    
        public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<" i"<<endl;
        }
};
//defining 
 int Calculator :: sumRealComplex(Complex o1,Complex o2){
        return(o1.a+o2.a);
    }

int main(){
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res=calc.sumRealComplex(o1,o2);

    cout<<"Sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
    
}