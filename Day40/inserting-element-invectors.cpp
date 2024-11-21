#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;

    for(int i=0;i<5;i++){
        int e;
        cin>>e;
        vec.push_back(e);
    }

    for(int i=0;i<5;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    //inserting an element at a specific position and then printing it again to see result
    vec.insert(vec.begin()+2,10);
     for(int i=0;i<5;i++){
        cout<<vec[i]<<" ";
    }

    //deleting a specific element 
    vec.erase(vec.end()-2);
     for(int i=0;i<5;i++){
        cout<<vec[i]<<" ";
    }

}