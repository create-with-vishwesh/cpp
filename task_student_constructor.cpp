#include<iostream>
#include<string.h>

using namespace std;

 class Student{
    private:
        int studentid;
        char studentName[30];
        float phy,chem,maths,total;
        float per;
    public:
        Student(){
            studentid=0;
            phy=0;
            chem=0;
            maths=0;
            cout<<"\nThe default constructors is called.";
        }
        Student(int id,int m1,int m2,int m3,char Name[30]){
            studentid=id;
            phy=m1;
            chem=m2;
            maths=m3;
            strcpy(studentName,Name);
            cout<<"\n\nThe Parameterized Constructor is called.";
        }
        void scandetails();
        void displaydetails();
        void totalper();
 };

void Student::scandetails()
{
    cout<<"\nEnter the details :\n";
    cout<<"Enter ID : ";
    cin>>studentid;
    cout<<"Enter Name : ";
    cin>>studentName;
    cout<<"Enter Physics Marks : ";
    cin>>phy;
    cout<<"Enter Chemistry Marks : ";
    cin>>chem;
    cout<<"Enter Maths Marks  : ";
    cin>>maths;
}
void Student::totalper(){
    total=(phy+chem+maths);
    per=total/3.0;
    cout<<total<<"\t"<<per<< "%";
}
void Student::displaydetails(){
    cout<<"\nID\tName\tPhy\tChem\tMaths\tTotal\tPercentage\n";
    cout<<"\n"<<studentid<<"\t"<<studentName<<"\t"<<phy<<"\t"
    <<chem<<"\t"<<maths<<"\t";
    totalper();
}
int main(){
    Student s;
    s.scandetails();
    s.displaydetails();
    // s.totalper();
    Student s1(1,50,50,50,"More");
    s1.displaydetails();
    // s1.totalper();
    return 0;
}