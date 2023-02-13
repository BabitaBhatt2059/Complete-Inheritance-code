#include<iostream>
using namespace std;
class A{
   protected: int a;
   public:
   void assigna(){
    a=10;
   }

};
class B:public A{
    protected: int b;
    public:
    void assignb(){
        b=20;

    }

};
class C:public B{
    protected: int c;
    public:
    void assignc(){
        c=80;
        
    }
};
class D{
    protected:int d;
    public:
    void assignd(){
        d=90;
    }

};
class E:public C,public D{
    protected:
    int Z;
    public:
    void sum(){
        Z=a+b+c+d;
    }
};
int main(){
    E aa;
    aa.sum();
    
return 0;
}