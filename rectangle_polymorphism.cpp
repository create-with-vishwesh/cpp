#include <iostream>
using namespace std;

class Rectangle{
    private:    
        int length;
        int width;
        float length1,width1;

    public:
        void area();
        void area(int l,int w);
        void area(float l,float w);
};

void Rectangle::area(){
    int ar;
    cout<<"Enter the Values of length and width :\n";
    cin>>length>>width;
    ar=length*width;
    cout<<"\nArea is : "<<ar;
}
void Rectangle::area(int l,int w){
    int ar;
    ar=l*w;
    cout<<"\nThe area of side(s) " <<l<<" & "<<w <<" is : "<<ar;
}
void Rectangle::area(float l,float w){
    int ar;
    ar=l*w;
    cout<<"\nThe area of side(s) " <<l<<" & "<<w <<" is : "<<ar;
}

int main(){
    Rectangle r;
    r.area();
    r.area(2,5);
    r.area(2.0f,3.0f);
    
}