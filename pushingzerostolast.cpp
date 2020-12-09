#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec;
	int n;
	cin>>n;
	int i;
	int a;
	for(i=0;i<n;i++)
	{
		cin>>a;
		vec.push_back(a);
	}
	vector<int>::iterator it;
	
	
	/*moving the zeros and  erasing the element*/
	for(it=vec.begin();it!=vec.end();it++)
	{
		i=*it;
		if(i==0)
		{
			vec.erase(it);
			vec.push_back(0);
		}
	}
	
	
	/*display*/
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it;
	}
	return 0;
}
