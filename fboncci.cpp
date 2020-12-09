#include<iostream>
using namespace std;
int main()
{
	int i,f,g,n;
	cout<<"enter the number of terms";
	cin>>n;
	f=0;
	g=1;
	for(i=0;i<n;i++)
	{
		cout<<f<<endl;
		f=f+g;
		g=f-g;
	}
	return 0;
}
