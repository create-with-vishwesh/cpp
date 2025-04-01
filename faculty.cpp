#include <iostream>
using namespace std;

class Faculty{
    private:
        int facultyID,salary;   // Data Members
        char faultyname[30];    
        char address[100];
        Faculty(){
            facultyID=0;
            salary=0;
            cout<<"The Default Constructor is called\n"
        }
        Facutly(int i,int s){
            facultyID=i;
            salary=s;
            cout<<"The parameterised Constructor is called\n"
        }
    public:
        void printdetails();
};
void Faculty::printdetails(){
    cout<<"Details are :\n";
    cout<<"FacultyID : "<<facultyID;
    cout<<"Salary"<<salary;
}
int main(){
    Faculty obj;
    obj.printdetails();
    Faculty obj1(5);
    obj1.printdetails();
    return 0;
}