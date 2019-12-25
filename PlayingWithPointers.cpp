#include<iostream>
using namespace std;

int main ()
{
  int a, *b, c, *d, x;
  cout<<*b<< " b "<<*d<< " d "<<endl;

  cout<<"d is " << d <<endl;
  cout<<"b is " << b <<endl;

  cout<<&b<<", "<<&d<<endl;

  c = 200;
  x = 200;

  cout<<*b<<endl;

  b = &x;

  d = b;
  cout<<"d is " << d <<endl;
  cout<<"b is " << b <<endl;

  a = *b;
  cout<<"a is "<< a <<endl;

  cout<<&b<<", "<<&d<<endl;
  
  return(0);
}
