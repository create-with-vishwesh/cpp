#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    private:
        int studentid;
        char studentName[30];
        int phy,chem,maths,eng,guj,hindi,comp,total;
        float per;
    public:
        Student(){
            studentid=0;
            phy=0;
            chem=0;
            maths=0;
            eng=0;
            guj=0;
            hindi=0;
            comp=0;
            cout<<"\nThe default constructors is called.";  
        }
        Student(int id,int m1,int m2,int m3,int m4,int m5,int m6,int m7,char Name[30]){
            studentid=id;
            phy=m1;
            chem=m2;
            maths=m3;
            eng=m4;
            guj=m5;
            hindi=m6;
            comp=m7;
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
    cout<<"Enter English Marks  : ";
    cin>>eng;
    cout<<"Enter Gujarati Marks  : ";
    cin>>guj;
    cout<<"Enter Hindi Marks  : ";
    cin>>hindi;
    cout<<"Enter Computer Marks  : ";
    cin>>comp;    
}

void Student::displaydetails()    
{
    cout<<"\nID\tName\tPhy\tChem\tMaths\tEng\tGuj\tHindi\tComp\tTotal\tPercentage\n";
    cout<<"\n"<<studentid<<"\t"<<studentName<<"\t"<<phy<<"\t"<<chem<<"\t"<<maths<<"\t"<<eng<<"\t"<<guj<<"\t"<<hindi<<"\t"<<comp<<"\t";    
    totalper();
}

void Student::totalper()    
{
    total=(phy+chem+maths+eng+guj+hindi+comp);
    per=total/7.0;
    cout<<total<<"\t"<<per<< "%";   
}    

int main()    
{
    Student s;
    s.scandetails();
    s.displaydetails();
    Student s1(1,50,50,50,50,50,50,50,"More");
    s1.displaydetails();
    return 0;
}
