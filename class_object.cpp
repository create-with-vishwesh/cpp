// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;
class Sample{
	private:
		int a,b,c;
	protected:
		int d,e;
	public:
		int f,g;

		void display();
		void sum();
		void scanData(){
		cout<<"\nEnter the Value of a,b,c,d,e,f : \n";
		cin>>a>>b>>c>>d>>e>>f>>g;
		}
};

void Sample::display(){
	cout<<endl<<"THe values are : ";
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e<<"\t"<<f<<"\t"<<g;
}

void Sample::sum(){
	int sum;
	sum=a+b+c+d+e+f+g;
	cout<<endl<<"The sum of All is : "<<sum;

}

int main(){
	// clrscr();
	Sample obj;
	obj.scanData();
	obj.display();
	obj.sum();
	// getch();
	return 0;
}            // end of main