#include<iostream>
using namespace std;

class Shop{
    int itemId[100];    // arrays
    int itemPrice[100];
    int counter;        //to keep track of items of each object

    public:
    void initCounter(void){     //methods 
        counter=0;
    }
    void setPrice(void);
    void displayPrice(void);

};

void Shop::setPrice(){
    cout<<"Enter ItemId of you item num :"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Item Price:"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"Price of item with id: "<<itemId[i]<<"is "<<itemPrice[i]<<endl;
    }

}
int main(){
    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
}