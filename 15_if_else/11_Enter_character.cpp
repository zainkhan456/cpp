#include<iostream>
using namespace std;
int main()
{
	char character;
	cout<<"enter a character: ";
	cin>>character;
	if(character >= '0' && character <= '9')
	cout<<"the character you entered was a digit";
	else if(character >= 'a' && character <= 'z')
	cout<<"the character you entered was a small case letter";
	else if(character >= 'A' && character <= 'Z')
	cout<<"the charater you entered was an upper case letter";
	else
	cout<<"you have entered special symbol";
	return 0;
}
