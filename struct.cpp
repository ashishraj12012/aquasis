#include <iostream>
using namespace std;
struct student
{
  char name[10];
  int rollno;

};
int main()
{
  struct student s1;

  cout<<"entre student name :"<<endl;
  cin>>s1.name;

  cout<<"entre rollno :"<<endl;
  cin>>s1.rollno;

  cout<<"Name of student is :"<<s1.name<<endl;

  cout<<"Roll no of student is :"<<s1.rollno<<endl;

  return 0;
}
