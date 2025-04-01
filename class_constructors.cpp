#include<iostream>
using namespace std;

 class Cricket{
    private:
        int playerID;
        char playerName;
        int runs;
    public:
        Cricket(){
            playerID=0;
            runs=0;
            cout<<"\nThe default constructors is called.";
        }
        Cricket(int id,int r)
        {
            playerID=id;
            runs=r;
            cout<<"\nThe parameterised constructor is called.";
        }
        void scanCricketdetails();
        void printCricketdetails();
 };

void Cricket::scanCricketdetails(){
    cout<<"\nEnter the \nPlayerid\tPlayername\tRuns\n";
    cin>>playerID>>playerName>>runs;
}
void Cricket::printCricketdetails(){
    cout<<"\nThe Cricket Detials Are :\n";
    cout<<playerID<<"\t"<<playerName<<"\t"<<runs;
}

int main(){
    Cricket c;
    c.scanCricketdetails();
    c.printCricketdetails();
    Cricket c1(1,65);
    Cricket c2(2,101);
    c1.printCricketdetails();
    return 0;
}