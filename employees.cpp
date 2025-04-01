#include <iostream>
#include <string.h>
using namespace std;

class Employees
{
    private:
    char employeesname [20];
    int employeeID;
    char department [20];
    float salary;
    public:
    Employees(){
        employeesname[0] = '\0';
        employeeID = 0;
        department[0] = '\0';
        salary = 0;

    }
    Employees(const char name[], int id, const char dep[], float sal){
        strcpy(employeesname, name);
        employeeID = id;
        strcpy(department, dep);
        salary = sal;
    }
    void getdata();
    void displaydata();
};


void Employees::getdata()
{
    cout << "Enter employee name: ";
    cin >> employeesname;
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter employee department: ";
    cin >> department;
    cout << "Enter employee salary: ";
    cin >> salary;
}

void Employees::displaydata()
{
    cout << "Employee name: " << employeesname << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Employee department: " << department << endl;
    cout << "Employee salary: " << salary << endl;
}

int main()
{
    Employees employee1;
    employee1.getdata();
    employee1.displaydata();
    return 0;
}