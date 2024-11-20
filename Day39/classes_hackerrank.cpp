#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
    //age
    void set_age(int a){
         age=a;
    }
    int get_age()const{
        return age;
        
    }
    //standard
    void set_standard(int s){
         standard=s;
    }
    int get_standard()const{
        return standard;
        
    }
    //firstname
    void set_first_name(const string& fn){
         first_name=fn;
    }
    string get_first_name()const{
        return first_name;
        
    }
    //lastname
    void set_last_name(const string& ln){
         last_name=ln;
    }
     string get_last_name()const{
        return last_name;
        
    }
    
    //method to_string
    
     string to_string() const {
        return std::to_string(age) + "," + first_name + "," +last_name + "," + std::to_string(standard);
    
};
    
    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
