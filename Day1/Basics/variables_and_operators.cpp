// variables:->containe to store data
/*
types:->
int: 4 bytes ,
float: 4 bytes,
char: 1 bytes,
double: 8 bytes,
boolean: 1 byte,

*/


/*
scope of variable:->

local: declared only insidebraces of any func and can be accessed only from data
global:declared outside any funand can be accessed from anywhere
*/


/*
data types:->

built-in: int , float, double, bool,char
user-defined : defined by user 
derived : array , function , pointers

*/

/*
variables are case sensative
char : 1 to 255
var name should begin with letter of alphabet or an underscore
no spaces aur speacial chars

*/

/*
OPERATORS
Arithmetic operators: +,-,*,/,%,a++,a--,--a,++a
Assignment operators:used to asign values to variables:int a=-3,char d='d'
Comparison operators: =,!=, <=,>=,<,>
Logical operators: AND &&, OR || , NOT 
*/

/*
Type Casting 

*/
#include<iostream>
using namespace std;
int main(){
    int a=45;
    cout<<(float)a;
    return 0;
}
