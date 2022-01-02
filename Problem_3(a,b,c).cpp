/* (a) */

#include<iostream>
using namespace std;
class person{
private:
int age;
string a;
public:
 void setName(string a){  string k;
    a= k;
    }
void setAge(int age)
{int g;
 age=g;
}
void getName (string k){
    cout << "------Person's Details------";
cout << "\nName:" <<k<<endl;
}
 void getAge(int g)
{
    cout << "Age: "<<g;

}
};
int main()
{
    person p1;
    p1.setName("Himel");
    p1.setAge(20);
    p1.getName("Himel");
    p1.getAge(20);
    return 0;
}


/* (b) */
#include<iostream>
using namespace std;
class person{
private:
int age;
string a;
public:
 void setName(){a= "Himel";}
void setAge()
{
 age=20;
}
void getName (){
    cout << "------Person's Details------";
cout << "\nName:" <<a<<endl;
}
 void getAge()
{
    cout << "Age: "<<age;

}
};
class student : public person {
private:
    float cgpa;
public:
    setCGPA(float cgpa){float b; cgpa= b;}
getCGPA (float b){ cout << "\nCGPA : "<<b<<endl;}
};
int main()
{
    person p1;
    student q2;
    p1.setName();
    p1.setAge();
    p1.getName();
    p1.getAge();
    q2.setCGPA(3.75);
    q2.getCGPA (3.75);

}

/* (c) */

#include<iostream>
using namespace std;
class person{
private:
int age;
string a;
public:
 void setName(){a= "Rahim";}
void setAge()
{
 age=20;
}
void getName (){
    cout << "------Person's Details------";
cout << "\nName:" <<a<<endl;
}
 void getAge()
{
    cout << "Age: "<<age;

}
};
class teacher : public person {
private:
    float salary;
public:
    setSalary(float salary) { float b;salary= b;}
getSalary (float b){ cout << "\nSALARY : "<<b<<endl;}
};
int main()
{
    person p1;
    teacher q2;
    p1.setName();
    p1.setAge();
    p1.getName();
    p1.getAge();
    q2.setSalary(45000);
    q2.getSalary (45000);

}
