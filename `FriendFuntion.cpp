/*
->What is Friend Funtion?
->Non-member Funtion which can access private memebers of the class 

*/

#include<bits/stdc++.h>
using namespace std ;

class abc{

    int x ;

    public: 
       abc(int n)
       {
         x= n ;
       }


 friend void print(abc &b) ;
       
};
//Friend Funtion 
void print(abc &b)
{
    cout<<b.x<<endl;
}


int main()
{  
    abc  ab(45) ;

    print(ab) ;

}
