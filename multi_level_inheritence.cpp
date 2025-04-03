#include <iostream>
using namespace std;

class A
{
    private:
    int a,b,c;
    // void add();
    void add(){
        c=a+b;
        cout<<"Addition is : "<<c<<endl;
    }
    public:
    A(){
        a=2;
        b=3;
        cout<<"The Super Class A or Grand Parent Class A Constructor is called."<<endl;
        add();
    }
};

class B: public A{
    private:
    int d,e,f;
    // void sub();
    void sub(){
        f=d-e;
        cout<<"Subtraction is : "<<f<<endl;
    }
        public:
        B(){
            d=5;
            e=6;
            cout<<"The Sub Derived Class B or Parent Class B Constructor is called."<<endl;
            sub();
        }
    };
    
    class C: public B
    {
        private: 
        int p,q,r;
        // void mul();
        void mul(){
            p=q*r;
            cout<<"Multiplication is : "<<p<<endl;
        }
        public:
        C(){
            q=9;
            r=10;
            cout<<"The Sub Derived Class C or Parent Child C Constructor is called."<<endl;
            mul();
        }
};

class D : public C{
    private:
        int x,y,z;
        // void div();
        void div(){
            z=x/y;
            cout<<"Division is : "<<z<<endl;
        }
    public:
        D(){
            x=11;
            y=22;
            cout<<"The Derived Class D or Child D Constructor is Called."<<endl;
            div();
        }
};





int main(){
    D obj;
    // All Objects called
    return 0;
}