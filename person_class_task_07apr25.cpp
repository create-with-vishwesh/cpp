#include <iostream>
#include <string.h>
using namespace std;

class Person {
    private:
    char name[30];
    char address[100];
    float phonenumber;
    float h,w;

    public:
    Person(){
            strcpy(name, "Rajesh");
            strcpy(address, "Pune");
            phonenumber=987654321;
            h=5.6;
            w=60.0;
    }
    void scandetails();
    void displaydetails();
};

void Person :: scandetails(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Address: ";
    cin>>address;
    cout<<"Enter Phone number: ";
    cin>>phonenumber;
    cout<<"Enter Height: ";
    cin>>h;
    cout<<"Enter Weight: ";
    cin>>w;
}

void Person :: displaydetails(){
    cout<<"\nName\tAddress\tPhoneNumber\tHeight\tWeight\n";
    cout<<name<<"\t"<<address<<"\t"<<phonenumber<<"\t"<<h<<"ft"<<"\t"<<w<<"kg"<<"\n";
}

int main(){
    Person p1;
    p1.scandetails();
    p1.displaydetails();
    return 0;
}
