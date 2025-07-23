#include<iostream>
using namespace std;
struct address{
	string city;
	int pcode;
};
int main()
{
	address city1,city2;
	cout<<"enter the name of the first city: ";
	getline(cin,city1.city);
	cout<<"enter the post code of the first city: ";
	cin>>city1.pcode;
	cin.ignore();
	cout<<"enter the name of the second city: ";
	getline(cin,city2.city);
	cout<<"enter the post code of the second city: ";
	cin>>city2.pcode;
	
	cout<<"city 1 address is: "<<endl;
	cout<<"name: "<<city1.city<<endl;
	cout<<"post code: "<<city1.pcode<<endl<<endl;
	
	cout<<"city 2 address is: "<<endl;
	cout<<"name: "<<city2.city<<endl;
	cout<<"post code: "<<city2.pcode<<endl;
	return 0;
}
