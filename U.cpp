#include<iostream>
using namespace std;
class sample
{
  int i;float j;
};
int main()
{
  sample:: s1={10,3.14};
  cout <<s1.i<<s1.j;
  return 0;
}
