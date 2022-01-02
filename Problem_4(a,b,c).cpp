/* 4.a) */
#include<iostream>
using namespace std;
class Mammal{
  public:
    Mammal(){
    cout<<"Mammals can give direct birth";
    }
};
int main(){
    Mammal bat;
    return 0;
}

/* 4.b) */
#include<iostream>
using namespace std;
class wingedAnimal{
  public:
    wingedAnimal(){
    cout<<"Winged animals can flap";
    }
};
int main(){
    wingedAnimal bat;
    return 0;
}

/* 4.b) */
#include<iostream>
using namespace std;
class WingedAnimal{
public:
WingedAnimal(){
cout<<"\nWinged animals can flap"<<endl;}
};
class Mammal{
public:
Mammal(){
cout<<"Mammal can give direct birth"<<endl;}

};
class Bat:public Mammal,public WingedAnimal{
public:
bird(){
cout<<"\nBats are birds of midnight"<<endl;}

};
int main(){
    Bat b1;
    b1.bird();
    return 0;
}
