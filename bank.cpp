#include<iostream>
using namespace std;

class Bank{
private:
    int customerId;
    int balance;
    char customerName[30];
public:
    Bank(){
        cout<<"\n\nThe Default Copnstructors is called";
        customerId=0;
        balance=0;
    }
    Bank(int id,int b){
        cout<<"\n\nThe Parameterised Constructor is called";
        customerId=id;
        balance=b;
    }
    Bank(Bank &b){
        cout<<"\n\nThe Copy Constructor is called.";
        customerId=b.customerId;
        balance=b.balance;
    }
    void display();
    void scan();
};

void Bank::display()
{
    cout<<"\nCustomerId :"<<customerId;
    cout<<"\nBalance :"<<balance;
    cout<<"\nCustomer Name :"<<customerName;
}

void Bank::scan()
{    
    cout<<"\nEnter the Customer Name here : ";
    cin>>customerName;

}

int main(){
    Bank b;
    b.scan();
    b.display();
    
    Bank b1(1,4000);
    b1.scan();
    b1.display();
    
    Bank b2(b1);
    b2.scan();
    b2.display();
    return 0;
}