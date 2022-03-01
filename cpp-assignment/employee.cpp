#include<iostream>

using namespace std;

class Employee{
    int salary, noh;
    public:
        void getInfo(int a, int b){
            salary = a;
            noh = b;
        }

        void AddSal(){
            if (salary<500){
                salary+=10;
            }
        }

        void AddWork(){
            if(noh>6){
                salary+=5;
            }
        }

        void display(){
            cout<<"salary is :"<<salary<<endl;
            cout<<"noh is :"<<noh<<endl;
        }
};

int main(){
    Employee emp1;
    int a, b;
    cout<<"enter the salary in $: ";
    cin>>a;
    cout<<endl<<"enter the number of hours of work per day: ";
    cin>>b;
    emp1.getInfo(a, b);
    emp1.display();
    emp1.AddSal();
    emp1.AddWork();
    emp1.display();

    return 0;
}