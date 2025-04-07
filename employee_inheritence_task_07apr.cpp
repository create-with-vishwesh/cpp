#include <iostream>
using namespace std;

class Person{
    private:
    char name[30];
    int age;
    public:
    void scanperdetails(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
    void displayperdetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

class Student :virtual public Person{
    private:
    int studentid;
    float marks[3];
    float total,per;
    public:
    void scanstddetails();
    void displaystddetails();
};

void Student::scanstddetails(){
    Person::scanperdetails();
    cout<<"Enter student ID: ";
    cin>>studentid;
    cout<<"Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cin>>marks[i];
        total=total+ marks[i];
    }
    per=total/3.0;
}

void Student::displaystddetails(){
    Person::displayperdetails();
    cout<<"Student ID: "<<studentid<<endl;
    cout<<"Marks in English, Hindi and Gujarati subject: ";
    for (int i = 0; i < 3; i++)
    {
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout<<"Percentage: "<<per<<endl;
    cout<<"Total: "<<total<<endl;
    if (per>=90)
    {
        cout<<"Grade: A"<<endl;
    }
    else if (per>=80)
    {
        cout<<"Grade: B"<<endl;
    }
    else
    {
        cout<<"Grade: C"<<endl;
    }
    cout<<endl;
}

class Employee:virtual public Person{
    private: 
    int empid;
    long int grosssalary;
    long int netsalary;
    public:
    void scanempdetails();
    void displayempdetails();
};

void Employee::scanempdetails(){
    Person::scanperdetails();
    cout<<"Enter employee ID: ";
    cin>>empid;
    cout<<"Enter netsalary: ";
    cin>>netsalary;
    grosssalary=netsalary*12;
}

void Employee::displayempdetails(){
    Person::displayperdetails();
    cout<<"Employee ID: "<<empid<<endl;
    cout<<"Net Salary: "<<netsalary<<endl;
    cout<<"Gross Salary: "<<grosssalary<<endl;
}

int main(){
    Student s1;
    s1.scanstddetails();
    s1.displaystddetails();
    Employee e1;
    e1.scanempdetails();
    e1.displayempdetails(); 
    return 0;
}