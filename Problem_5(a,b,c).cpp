// 5.a)
#include<iostream>
using namespace std;
class Makeem{  /* This is Base class,cause Mr.Makeem is father*/
public:
};
class Hakeem:public Makeem{ /* This is Derived class,cause Mr.Hakeem(Derive class) is the child of Makeem(Base Class)*/
public:
};
class Rakeem:public Hakeem{ /* This is another Derived class,cause Mr.Rakeem(Derive class) is the child of Hakeem(Base Class)*/
public:
 };
 int main()
 {
     Makeem c1;
     Hakeem c2;
     Rakeem c3;
 }

// 5.b)
#include<iostream>
using namespace std;
class Makeem{  /* This is Base class,cause Mr.Makeem is father*/
public:
    mak(){}//Here will print the statement of Mr.Makeem Ex. Mansion and Ford mustang
};
class Hakeem:public Makeem{ /* This is Derived class,cause Mr.Hakeem(Derive class) is the child of Makeem(Base Class)*/
public:
    Hek(){}//Here will print the statement of Mr.Hakeem ex. Casino
};
class Rakeem:public Hakeem{ /* This is another Derived class,cause Mr.Rakeem(Derive class) is the child of Hakeem(Base Class)*/
public:
    Rak(){}//Here will print the statement of Mr.Rakeem ex. Garments
 };
 int main()
 {
     Makeem c1;
     Hakeem c2;
     Rakeem c3;
 }


/* 5.c) */
#include<iostream>
using namespace std;
class Makeem{
   public:
    mak()
   {cout<<"Makeem : mansion    Ford Mustang"<<endl;}
};
 class Hakeem:public Makeem{
public:
    Hek()
    {cout<<"Hakeem : casino"<<endl;}
 };
 class Rakeem:public Hakeem{
public:
    Rak(){cout<<"Rakeem : Garments"<<endl;}
 };
 int main()
 {
     Makeem c1;
     c1.mak();
     Hakeem c2;
     c2.Hek();
     Rakeem c3;
     c3.Rak();
     return 0;
 }

