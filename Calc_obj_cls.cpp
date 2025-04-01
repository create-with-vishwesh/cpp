#include <iostream>
using namespace std;

class Calculator
{
private:
    int a,b;
public:
    void scan();
    void add();
    void sub();
    void mul();
    void div();
};
void Calculator::scan(){
    cout<<"Enter the Values of a and b :\n";
    cin>>a>>b;

}
void Calculator::add(){
    int sum = a+b;
    cout<<"The sum is "<<sum<<endl;
    
}
void Calculator::div(){
    int sum = a/b;
    cout<<"The division is "<<sum<<endl;
    
}
void Calculator::mul(){
    int sum = a*b;
    cout<<"The multiplication is "<<sum<<endl;
    
}

void Calculator::sub(){
    int sum = a-b;
    cout<<"The sub is "<<sum<<endl;
    
}

int main(){
    start:
    Calculator obj;
    int ch;
    obj.scan();
    cout<<"\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit";
    cout<<"\nEnter the Choice : ";
    cin>>ch;
    switch(ch){
        case 1: obj.add();
                goto start;
        case 2: obj.sub();
                goto start;
        case 3: obj.mul();
                goto start;
        case 4: obj.div();
                goto start;
        case 5: exit(0);
    }

    return 0;
}