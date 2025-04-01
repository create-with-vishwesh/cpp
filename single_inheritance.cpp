#include <iostream>
using namespace std;

class Bird
{
    private:
        int weight;
        char color[30];
    public:
        void scanDetails();
        void displayDetails();
};
void Bird::scanDetails()
{
    cout << "Enter the weight of the bird: ";
    cin >> weight;
    cout << "Enter the color of the bird: ";
    cin >> color;
}
void Bird::displayDetails()
{
    cout<<"Weight\t"<<"Colur\n";
    cout<<weight<<"\t"<<color<<"\t";
}

class Flying: public Bird
{
    char flyingDistance[30];
    public:
        void scanfly();
        void displayfly();
};
void Flying::scanfly()
{
    cout<<"Enter the Flying Distance: ";
    cin>>flyingDistance;
}
void Flying::displayfly()
{
    cout<<"Flying Distance\n";
    cout<<flyingDistance<<endl;
}

int main(){
    Flying b1;
    b1.scanDetails();
    b1.scanfly();
    b1.displayDetails();
    b1.displayfly();
    return 0;
}