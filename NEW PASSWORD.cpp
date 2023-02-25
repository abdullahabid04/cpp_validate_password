#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#define clrscr system("cls")
using namespace std;
bool pass()
{
	string password,Password;
	int a=0;//for ASCII
	int p=0,q=0,r=0,s=0;//counter
	while (1)
	{
		clrscr;
		cout << "\tInstuctions\n";
		cout << "At least 2 - 4 \t\tintegers\n";
		cout << "At least one Small \tAlphabet\n";
		cout << "At least one Capital \tAlphabet\n";
		cout << "At least one Special \tCharacter\n";
		cout << "Set new Password : ";
		cin>> password;
		cout << "Confirm Password : ";
		cin>> Password;
		if (Password==password)
		{
			break;
		} 
		else
		{
			cout<<"The passwords did not match :(\n";
			Sleep(1000);
		}
	}
	for (int i=0;i<password.length();i++)
	{
		a=password.at(i);
		if (!(a<48||a>57))
		{
			p++;
		}
		if (!(a<65||a>90))
		{
			q++;
		}
		if (!(a<96||a>122))
		{
			r++;
		}
		if (!((a>=48&&a<=57)||(a>=65&&a<=90)||(a>=96&&a<=122)))
		{
			s++;
		}
	}
	if (((p>=2&&p<=6)&&(q>=1)&&(r>=1)&&(s>=1)&&(password.length()>=8)))
	{
		return 1;
	} else {
		return 0;
	}
}

int main()
{
	while(1)
	{
		if (pass())
		{
			cout<<"Congratulations! Sucessfully saved a strong Password ;)";
			return 0;
		}
		else 
		{
			clrscr;
			cout<<"This Password was too weak :(\nWait while we renew the program.";
			Sleep(1000);
			clrscr;	
		}
	}
}


