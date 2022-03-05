#include<iostream>

using namespace std;

class AddAmount{
    int balance=50;
    public:
        AddAmount(){
            cout<<"default constructor called"<<endl;
        }

        AddAmount(int add){
            cout<<"parameterized constructor called"<<endl;
            balance+=add;
        }

        void display(){
            cout<<"available amount: "<<balance<<endl;
        }
};

int main(){
    AddAmount amo1;
    amo1.display();

    AddAmount amo2(50);
    amo2.display();

    return 0;
}