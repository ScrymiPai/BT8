#include <iostream>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
cout<<&x<<endl;
}
void g(int yval)
{
   int y;

 cout<<&y<<endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
// x va y co cung dia chi
// vi hai ham co cung kieu, cung thu tu sau main, cung bien kieu int nen hai bien nay cung dia chi
