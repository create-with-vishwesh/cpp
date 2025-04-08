#include <iostream>
using namespace std;

class Shape{
    private:
    float height,width,length;
    public:
    Shape(){
        height=5.0;
        width=3.0;
        length=2.0;
    }
    Shape(float l,float w,float h){
        length=l;
        width=w;
        height=h;
    }
    int returnheight(){
        return height;
    }
    int returnlength(){
        return length;
    }
    int returnwidth(){
        return width;
    }
    void scandetails();
    void displaydetails();
};

void Shape::scandetails(){
    cout<<"--------Scan Details--------"<<endl;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"Enter the height: ";
    cin>>height;
}

void Shape::displaydetails(){
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height<<endl; 
}

class Rectangle : public Shape{
    public:
    Rectangle(){
        cout<<"--------FOR RECTANGLE--------"<<endl;
        cout<<"The Default constructor called with the use of base class."<<endl;
    }
    Rectangle(float l,float w,float h) : Shape (l,w,h){
        cout<<"The Parameterized constructor called with the use of base class and initialization list."<<endl;
    }
    void calculateArea();
};

void Rectangle::calculateArea(){
    float area;
    area=returnlength()*returnwidth();
    // cout<<"-------Rectangle-------"<<endl;
    cout<<"Area of Rectangle: "<<area<<endl;
}

class Square : public Shape{
    public:
    Square(){
        cout<<"\n\n--------FOR SQUARE--------"<<endl;
        cout<<"The Default constructor called with the use of base class."<<endl;
        }
    Square(float l): Shape (l,l,l){
        cout<<"The Parameterized constructor called with the use of base class and initialization list."<<endl;
    }
    void calculateArea();
};

void Square::calculateArea(){
    float area;
    area=returnlength() * returnlength();
    // cout<<"-------Square-------"<<endl;
    cout<<"Area of Square: "<<area<<endl;
}

int main(){
    
    // Default Constructor of Rectangle called Object
    Rectangle r;
    r.scandetails();
    r.displaydetails();
    r.calculateArea();
    
    // Parameterised Constructor of Rectangle called Object
    Rectangle r1(3.0,4.0,5.0);
    r1.calculateArea();
    
    // Default Constructor of Square called Object
    Square s;
    s.scandetails();
    s.displaydetails();
    s.calculateArea();

    // Parameterised Constructor of Square called Object
    Square s1(5.0);
    s1.calculateArea();
    return 0;
}