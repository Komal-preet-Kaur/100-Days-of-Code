#include<iostream>
#include<vector>
using namespace std;
int main(){

    //FOR LOOP
    //method 1 when we don't define the size while declaring the vectors
    vector<int> v;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }


    //method 2
 vector<int> v(5);

    for(int i=0;i<5;i++){
        cin>>v[i];
    }

///printing the vector using for loop
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
//FOR EACH LOOP
//printing the vector using for each loop
for(int ele:v){
    cout<<ele<<" ";
}

cout<<endl;

//WHILE LOOP

int idx=0;
while(idx<v.size()){
    cout<<v[idx++]<<" ";
}


    return 0;

}