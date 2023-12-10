/*-what is object oriented programming ?
-main focus on data
-bind the data to the funtion using object 
-program divided into object - data , funtion
-Protects data from accidental changes
*/
//-------------------------------------------
/*
-what is class? 
-fundamental unit of oop
-user defined data types
-define some data/properties and method/funtionality 
*/
//--------------------------------------------
/*
what is object??
-variable of type class
*/
//--------------------------------------------
/*
-> what is constructor? 
-> used to intialie our object 
-> this is funtion which is called when an objet is created 
-> same name as class value 
-> types == default , parameterized , copy 
*/
//--------------------------------------------
/*
-> What is destructor ? 
-> Funtion is called when object is deleted ; 
-> Cannot pass any parameters ;
-> name -- ~(class name)
*/

#include<bits/stdc++.h>
using namespace std ;

class Country{
    public:    
     string name ;
     int DOI ; 
     string currency ;   
    
    Country(){
        name = " " ;
        DOI  = 0 ;
        currency = " " ;
    }
    Country(Country& desh)
    {
        name = desh.name ;
        DOI = desh.DOI ;
        currency = desh.currency ;
    }
    ~Country(){
        cout<<"Destructor funtion is called"<<endl;
    }

};
class Rectangle {
     public:

     int  l ;
     int b ;

     Rectangle() { // default constructor - no args passed
        l = 0 ;
        b = 0 ; 

     }
     Rectangle(int x , int y){ // parameterised constructor - args pass 
        l = x ;
        b = y ;
     }

     Rectangle(Rectangle& r)
     {
        l = r.l ; 
        b = r.b ; 
     }
    

};

int main()
{   

    Country america ; // object 
    america.name = "united state of America"; 
    america.DOI = 1717 ;
    america.currency = "Dollar" ;

    Country *Taiwan = new Country() ;
    Taiwan->name = "Taiwan" ;
    Taiwan->DOI= 1000 ; 
    Taiwan->currency = "Dinnar" ; 
    cout<<"Details of America"<<endl; 
    cout<<america.name<<"-"<<america.DOI<<"-"<<america.currency <<endl; 
    cout<<"Details of Taiwan"<<endl ;
    cout<<endl;
    cout<<Taiwan->name<<"-" << Taiwan->DOI << "-" <<Taiwan->currency<<endl; 
    cout<<endl; 
    Rectangle r1(3 , 4) ;
    Rectangle r2 ;
    Rectangle r3 = r1 ;
    Country Canada = america ; 
  
    
    cout<<r1.l<<" " <<r1.b<<endl ; 
    cout<<r2.l<<" "<<r2.b<<endl; 
    cout<<r3.l<<" "<<r3.b<<endl ;
    
    
    cout<<Canada.name<<" " << Canada.DOI<<endl;

        
     
    return 0 ;
}


