#include<bits/stdc++.h>
using namespace std ;

class Box {
int l ;
int b ;
int h ;
    public:
      Box(){
        l = 0 ;
        b = 0 ;
        h = 0 ;
      }

      Box(int length , int breadth , int height){
          l =  length ;
          b = breadth ;
          h = height ;                                                                                                       
      }

     Box(Box &B)
     {
        l = B.l ;
        b = B.b ;
        h = B.h ;
     }

     int getLength(){
        return l ;
     }
     int getBreadth()
    {
        return b ;
    }
    int getHeight(){
        return h ;
    }
    long long CalculateVolume(){
        return l*b*h ;
    }
    bool operator<(Box &c)
    {
          if(l<c.l || b<c.b && l==c.l || h<c.h &&b==c.b&&l==c.l)
          {
            return true ;
          }
        
      return false ;
    }

    void output(ostream& out)const {
        cout<<l<<" "<<b<<" "<<h ; 
    }
};   
ostream& operator<<(ostream& out , Box b)
{
    b.output(out) ;
    return out ;
}
int main ()
{
    Box b1 ;
    Box b2(2,3,4) ;
    
    bool x= (b1<b2) ;
    cout<<b2<<endl;


    
   
}
