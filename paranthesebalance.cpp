#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int i;
	int n;
	vector<char> s;
	stack<char> p;
	cout<<"enter the string";
	cin>>str;
	n=str.size();
	for(i=0;i<n;i++)
	{
		s.push_back(str[i]);
	}
	vector<char>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
			if(p.empty())
	{
		p.push(str[i]);
	}
	else
	{
		if(p.top()==str[i])
		{
			p.pop();
		}
		else
		{
			p.push(str[i]);
		}
	}	
	}
	if(p.empty())
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
