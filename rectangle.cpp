#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;
    public:
        Rectangle(int l,int w){
        int length=l;
        int width=w;
        }
        Rectangle(){
            int length=1;
            int width=1;
            
        }
        void calculateArea();
        void calculatePerimeter();
};
void Rectangle::calculateArea(){
    int area;
    area = length*width;
    cout<<"\nArea is :"<<area;
    
}
void Rectangle::calculatePerimeter(){
    int peri;
    peri = (2*(length+width));
    cout<<"\nPerimeter is :"<<peri;
}

int main(){
    // Rectangle r;
    // r.calculateArea();
    // r.calculatePerimeter();
    
    Rectangle r(3,4);
    r.calculateArea();
    r.calculatePerimeter();
    return 0;
}