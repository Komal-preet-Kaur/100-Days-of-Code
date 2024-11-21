#include<iostream>
#include<cstring>
using namespace std;

class Person{
    private:
    char* name; //for dynamic allocation we use pointer 
    public:

    Person(const char* personName){
        if(strlen(personName)>100)
        name=new char[strlen(personName)+1];    //allocate memory for name and +1 is for the null charcater 
        strcpy(name,personName);
         
    }
  
    void display() const{
        cout<<"Person's name is :"<<name;
    }
      ~Person(){
        delete[] name;
    }

};

int main(){
    char input[101];
    cin>>input;
    Person p(input);
    p.display();
    return 0;

}