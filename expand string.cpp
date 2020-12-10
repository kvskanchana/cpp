/*
ip:
a4d2b3
op:
aaaaddbbb

ip:
aa2b4
op:
invalid

ip:
a99n3m4
op:
invalid

*/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string str;
	int i,j;
	cout<<"enter the string";
	cin>>str;
	int n;
	n=str.size();
	//cout<<n;
	int fact;
	if(n%2!=0)
	cout<<"Inavalid";
//	else
//	cout<<"success";
	else
	{
		for(i=0;i<n;i++)
		{
			if((int(str[i])>=97)&&(int(str[i])<=122))
			{
				fact=int(str[i+1])-48;
					if((fact>=1)&&(fact<=9))
					{
						for(j=0;j<fact;j++)
						{
							cout<<str[i];
						}	
					}
					else
					{
						cout<<"invalid";
						break;
					} 
					i++;
			}
			else
			{
				cout<<"invalid";
				break;
			}
		}
	}
	
	return 0;
}
