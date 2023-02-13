#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    
    void getdata(){
        cout<<"the value of x:";
       cin>>x; 
    }
};
class B{
    protected:
    int y;
    
    void putdata(){
        cout<<"the value of y:";
       cin>>y; 
    }
};
class derived:public A,public B{
    protected: int z;
    public:
    void display(){
    z=x+y;
    cout<<"sum is:"<<z;
    }

};
int main(){
    derived aa;
    
    aa.display();
    
return 0;
}