#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array";
	cin>>n;
	vector<int> vec;
	int i,t;
	for(i=0;i<n;i++)
	{
		cin>>t;
		vec.push_back(t);
	}
	sort(vec.begin(),vec.end(),greater<int>());
	int res=0;
	vector<int>::iterator it;
	it=vec.begin();
	n=3;
	while(n)
	{
		n--;
		res=res+(*it);
		it++;
	}
	cout<<res;
	return 0;
}
