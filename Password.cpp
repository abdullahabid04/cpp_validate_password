#include<iostream>
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
		
			if(ascii>=97 && ascii<=122)
			{
				small_alphabets++;
			}
			if(ascii>=65 && ascii<=90)
			{
				capital_alphabets++;
			}
			if(ascii>=48 && ascii<=57)
			{
				numbers++;
			}
			if((ascii>=33 && ascii<=47)||(ascii>=58 && ascii<=64)||(ascii>=91 && ascii<=96)||(ascii>=123 && ascii<=126))
			{
				special_characters++;
			}
		}
		//cout<<"small : "<<small_alphabets<<" capital : "<<capital_alphabets<<" special : "<<special_characters<<" numbers : "<<numbers<<" length : "<<password.length()<<endl;
		if((small_alphabets>=2)&&(capital_alphabets>=2)&&(numbers>=2)&&(special_characters>=2)&&(password.length()>=8))
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
