//program to demonstrate the size of structure or structure padding
#include<iostream>
using namespace std;
struct employ{
	string name;
	int id;
	double salary;
};
int main()
{
  employ e1,e2;
  cout<<sizeof(e1.name)<<endl;
  cout<<sizeof(e1.id)<<endl;
  cout<<sizeof(e1.salary)<<endl;
  e1.name = "mudassir khan";
  e1.id = 534;
  e1.salary = 50000;
   cout<<e1.name<<endl<<e1.id<<endl<<e1.salary<<endl;
  cout<<"enter the name of the employ: "<<endl;
  //cin>>e1.name;//can't handle spaces
  getline(cin,e1.name);
  cout<<"enter the id of the employ: "<<endl;
  cin>>e1.id;
  cout<<"enter the salary of the employ: "<<endl;
  cin>>e1.salary;
  cout<<"enter the name of the employ again: ";
  cin.ignore();//To ignore the input buffer
  getline(cin,e1.name);
  cout<<e1.name<<endl<<e1.id<<endl<<e1.salary<<endl;
  cout<<"total memory of the structure is : "<<sizeof(employ);
  /*The total memory of the structure will be 40 because compile first create space for the 
  bigger data members and then create the space for small data members and also create some 
  extra space so to make it equal or allign with the bigger data member.
  so that'why instead of 32 ,the total space of the structure is 40.(24 + (4 + 4) + 8; */
  //This concept in known as padding.
return 0;
}


