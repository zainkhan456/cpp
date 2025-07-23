#include<iostream>
using namespace std;
struct address{
	char city[50];
	int pcode;
};
int main()
{
 address city1,city2;
 cout<<"enter the name both cities: ";
 //cin>>city1.city>>city2.city;
 //donot use getline(cin,city1.city) for arrays of data type other than string instead use it like this
 cin.getline(city1.city,50);
 cin.getline(city2.city,50);
 cout<<"enter the post code of both cities: ";
 cin>>city1.pcode>>city2.pcode;
 cout<<"the information about "<<city1.city<<" is: "<<endl;
 cout<<"name: "<<city1.city<<endl;
 cout<<"post code: "<<city1.pcode<<endl;
  cout<<"the information about "<<city2.city<<" is: "<<endl;
 cout<<"name: "<<city2.city<<endl;
 cout<<"post code: "<<city2.pcode<<endl;
 return 0;
}


