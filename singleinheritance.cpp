#include <iostream>
using namespace std;
class A
{

  protected: int x, y;
  public:
  void getdata()
  {
    cout << "the value of x and y=";
    cin >> x >> y;
  }


};
class B : public A
{
  protected: int z;
public:void showdata()
  {
    
    z = x + y;
    cout<<z;
  }

  
};
int main()
{
  B b;
  b.showdata();

  return 0;
}