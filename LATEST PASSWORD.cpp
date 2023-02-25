#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	int small_alphabets=0,capital_alphabets=0,special_characters=0,numbers=0,ascii=0;
	string password;
	
	cout<<"Enter your password"<<endl;
	cin>>password;
	
	while(1)
	{	
		for(int i=0;i<password.length();i++)
		{
			ascii=password.at(i);
		
			if(islower(ascii))
			{
				small_alphabets++;
			}
			if(isupper(ascii))
			{
				capital_alphabets++;
			}
			if(isdigit(ascii))
			{
				numbers++;
			}
			if(!isupper(ascii) && !isdigit(ascii) && !islower(ascii))
			{
				special_characters++;
			}
		}
		//cout<<"small : "<<small_alphabets<<" capital : "<<capital_alphabets<<" special : "<<special_characters<<" numbers : "<<numbers<<" length : "<<password.length()<<endl;
		if((small_alphabets>2)&&(capital_alphabets>2)&&(numbers>=1)&&(special_characters>=1)&&(password.length()>=8))
		{
			cout<<"your password has been accepted"<<endl;
			break;
		}
		else
		{
			cout<<"your pasword is too weak.Enter again"<<endl;
			cin>>password;
		}
	}
}
