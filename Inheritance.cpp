/*
what is encapsulation ? 
-> Binding of methods and variable together into a single unit -> class ;
-> data is only accessible from the class methods  ;
->leads to data abstraction  
*/
//------------------------------------
/*
->what is Abstraction ;
->enables us to display only essential information while hiding implentation details ;
*/
//------------------------------------
/*
->INHERITENCE
->Modes of Inheritence 
   -Public(Data,funtion can be access from anywhere in the code) 
   -Private (Accessible from own class only)
   -Protected (Accessible in own class , parent class & derived class)
   ->single level inheritance
   ->Multi level inheritance 
   -multiple inheritance
   ->Hierarchical Inheritance
   ->Hybrid Inheritance
   ->Diamond Problem
*/
#include<bits/stdc++.h> 
using namespace std ;

class Parent{
       public:
            int x ;

       private:
            int y ;

       protected:
            int z ;


};
class child1 : public Parent {
    //x will remain public 
    //z will remain protected 
    //y will not accessible
 };
 class child2: protected Parent {
    //x will be protected 
    //z will remain protected
    //y will not accessible 
 };
class child3: private Parent{
    //x will be private 
    //y will not accessible
    //z will be private 
};



class Mother {
    public:
    Mother(){
    cout<<"This is Mother Class"<<endl;
    }
     
} ;

class Father {
    public:
    Father(){
    cout<<"This is Father Class"<<endl;
    }
     
} ;
class child: public Mother{
    public:
    child(){
       cout<<"This is Children Class"<<endl;
    }
     
};
class grandchild: public child{
    public:
    grandchild(){
      cout<<"This is Grandchild Class"<<endl;
    }
    
};
class Grandgrandchild: public grandchild{
    public:
    Grandgrandchild(){
         cout<<"This is Grandgrandchild class"<<endl;
    }
};
class MultipleInheritance: public Mother, public Father {
           public:
           MultipleInheritance(){
            cout<<"Multiple Inheritance"<<endl;
           }
} ;

class ABC{
    
    int x ; 

    public: 

    void set(int n)
    {
        x = n ;
    }
    int get ()
    {
        return x;
    }

};





int main()
{
    ABC *trial = new ABC() ;
    
   cout<<"Multilevel Inheritence: "<<endl;
    Grandgrandchild gr ;
    cout<<endl;
    
    cout<<"Multiple Inheritance: "<<endl;
    MultipleInheritance mr ;
    cout<<endl;
    trial->set(3);
    cout<<trial->get()<<endl;

    

    return 0 ;
}
