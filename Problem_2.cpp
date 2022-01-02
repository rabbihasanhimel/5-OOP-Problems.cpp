#include <iostream>
using namespace std;
class building {
protected:
int fl,room,sq,bed,bath;
public:
    void bail(){
    cout << "Enter Number of Floors: ";
    cin>> fl;
    cout << "Enter Number of Rooms: ";
    cin>> room;
    cout << "Enter Total Square Footage: ";
    cin>> sq;}
};
class house : public building {
public:
    void ro(){
cout << "Enter Number of Bedrooms: ";
cin>> bed;
cout << "Enter Number of Bathrooms: ";
cin>> bath;}
void out()
{
    cout<<"\n-----Details Of The Building-----" ;
    cout << "\nNumber of Floors: "<<fl;
    cout << "\nNumber of Rooms: "<<room;
    cout << "\nTotal Square Footage: "<<sq;
    cout << "\nNumber of Bedrooms: "<<bed;
    cout << "\nNumber of Bathrooms: "<<bath;

}

};
int main ()
{

    house ob1;
    ob1.bail();
    ob1.ro();
    ob1.out();


}
