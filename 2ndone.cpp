#include <iostream>
using namespace std;
class A
{
protected:
  int x, y;

public:
  void getdata()
  {
    cout << "the value of x and y=";
    cin >> x;
    cin >> y;
  }
  int showdata()
  {
    int z;
    z = x + y;
    cout << z;
    return z;
  }
};
class B : public A
{
public:
  void display()
  {
    int z = showdata();
    cout << "display sum: " << z;
  }
};
int main()
{
  B b;
  b.display();
return 0;
}