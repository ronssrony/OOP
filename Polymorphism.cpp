/*
->what is Polymorphism ? 
->ability of object/methods to take different  formsk 
*/
//-------------------------------->compile time polymorphism 
/*
-> What is Funtion Overloading? 
->Define a number of funtion with some funtion name they perform differently according to the arguments passed 
->type(how many args or type )
*/
/*
->What is Operator Overloading?
->ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading
*/
//------------------------------->run time polymorphism
/*
->What is run time polymorphism?
->resolved at run time ;
->Using funtion overriding 
->Child class defines a funtion of parent class()
*/


#include<bits/stdc++.h>
using namespace std ;



class Area { //Funtion overloading
    public:

       void area(int x , int y ) {
          int res = x*y ; 
          cout<<res<<endl;
       }

       void area (int x , int y , int z)
        {
            int res = x*y*z ;
            cout<<res<<endl; 
        }
        void area (float x , float y)
        {
            cout<<x+y<<endl;
        }
};

class Complex{ //operator overeloading

    public: 
          int real ; 
          int img ;
          string order ;
          Complex(){
             real= 0 ;
             img = 0 ;
             order = " " ;
          }
          Complex(int x , int y , string z){
            real =x ;
            img = y ;
            order = z ;
          }
          Complex operator+ (Complex& c)
            {
                Complex ans(0,0," ") ; 
                ans.real = real+c.real ;
                ans.img = img+c.img ;
                ans.order = order + c.order ;  
                return ans ;
            }
};

class Parent{
  public:
      virtual void print(){
        cout<<"This is parent class"<<endl;
       }
       void show (){
        cout<<"This is parent class"<<endl;
       }
};

class child: public Parent{
    public:
       void print(){
        cout<<"This is Child Class"<<endl;
       }

       void show()
       {
        cout<<"This is child Class"<<endl;
       }

};

 int main()
 {
     Area abc ;
     cout<<"Funtion Overloading: "<<endl; 
     abc.area(2,3) ; 
     abc.area(2,3,4); 
     abc.area(float(2.3), float(5.3)) ; 
    cout<<"Operator Overloading: "<<endl;
     Complex c1(2,3,"first") ; 
     Complex c2(3,5 ,"second") ; 
     Complex c3 = c1+c2 ;
     cout<<c3.real <<"+i"<<c3.img<<endl;
     cout<<c3.order<<endl;
    
    cout<<"Funtion overriding: "<<endl;
     Parent *p ;
     child c ;
     p = &c ;
     p->print() ; 
     p->show() ;

     return 0 ;

 }
