#include <iostream>
using namespace std;

class Square{
    private: 
        int side;
    public:
        void scandetails();
        void displaydetails();
};

void Square::scandetails(){
    cout<<"Enter the side of the square: ";
    cin>>side;
}

void Square::displaydetails(){
    cout<<"The area of the square is: "<<side*side<<endl;
}

class Rectangle: public Square{
    int l,w;
    public:
        void scanarea();
        void displayarea();
};

void Rectangle::displayarea(){
    cout<<"The area of rectangle is : "<<l*w<<endl;
}

void Rectangle::scanarea(){
    cout<<"Enter the length and width: "<<endl;
    cin>>l>>w;
}

int main(){
    Rectangle s;
    s.scandetails();
    s.scanarea();
    s.displaydetails();
    s.displayarea();
    return 0;
}