#include<iostream>
#include<string>
using namespace std;
//*********** The following codes defines a student structure **************
struct stud_info
{
	string stname;
	int strollno;
	string staddress;
	int stage;
};
int main()
{
	cout<<"......this program explain the concept of structures.....\n";
	stud_info zain,mhkhan,ihtesham;
	zain.stname = "zain khan";
	zain.strollno = 231326;
	zain.stage = 22;
	zain.staddress = "spalmai bala ";
	mhkhan.stname = "muhammad hasnain khan ";
	ihtesham.stage = 13;
	cout<<"zain info::: \nname    :  "<<zain.stname<<endl;
	cout<<"roll no :  "<<zain.strollno<<endl;
	cout<<"age     :  "<<zain.stage<<endl;
	cout<<"address :  "<<zain.staddress<<endl;
	cout<<"mhkhan info:::\nname:  "<<mhkhan.stname<<endl;
	cout<<"ihtesham info:::\nage: "<<ihtesham.stage;
	return 0;
}
