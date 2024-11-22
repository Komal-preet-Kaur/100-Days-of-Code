//used so that we won't have to make multiple classess if we have to do same work with different data types
//just include template and define the data type when u create object anf not in class 

#include<iostream>
using namespace std;

template<class T>

class Number
{
  public:
  Number(T value)   //rather than defining the data type of value as int/float 
   {                //  we gave template and will define the datatype in object creation
    cout<< "Entered Number is " <<value << endl;
  }
};

int main()
{
  Number <int> I1 (35);     //defined int now 
  Number <char> I2 ('N');
  Number <float> I3 (65.05);
  return 0;
}