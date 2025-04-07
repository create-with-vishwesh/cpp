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
    cout<<"--------Scan Student Details--------"<<endl;
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
    cout<<"--------Display Student Details--------"<<endl;
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
    cout<<"--------Scan Employee Details--------"<<endl;
    Person::scanperdetails();
    cout<<"Enter employee ID: ";
    cin>>empid;
    cout<<"Enter netsalary: ";
    cin>>netsalary;
    grosssalary=netsalary*12;
}

void Employee::displayempdetails(){
    cout<<"--------Display Employee Details--------"<<endl;
    Person::displayperdetails();
    cout<<"Employee ID: "<<empid<<endl;
    cout<<"Net Salary: "<<netsalary<<endl;
    cout<<"Gross Salary: "<<grosssalary<<endl;
}

class StudIntern:virtual public Student, virtual public Employee{
    private:
    int internID;
    float stipend;
    char companyworking[30];
    public:
    void scanstdindetails();
    void displaystdindetails();
};

void StudIntern::scanstdindetails(){
    cout<<"--------Scan Intern Details--------"<<endl;
    cout<<"Enter intern ID: ";
    cin>>internID;
    cout<<"Enter stipend: ";
    cin>>stipend;
    cout<<"Enter company working: ";
    cin>>companyworking;
}

void StudIntern::displaystdindetails(){
    cout<<"--------Display Intern Details--------"<<endl;
    cout<<"Intern ID: "<<internID<<endl;
    cout<<"Stipend: "<<stipend<<endl;
    cout<<"Company working: "<<companyworking<<endl;
}

int main(){
    StudIntern s1;
    //scan all
    s1.scanstddetails();
    s1.scanempdetails();
    s1.scanstdindetails();
    //display all
    s1.displaystddetails();
    s1.displayempdetails();
    s1.displaystdindetails();
    return 0;
}