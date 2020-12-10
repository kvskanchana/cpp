/*
ip:
n=7
9 8 4 2 9 1 3

op:
9 1 9 2 8 3 4

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter the size";
	cin>>n;
	cout<<"enter the elements of size"<<n<<endl;
	vector<int> ar;
	for(i=0;i<n;i++)
	{
		cin>>j;
		ar.push_back(j);
	}
	vector<int>::iterator ptr=ar.begin(); 
      
    // Displaying vector elements using begin() and end() 
    cout << "The vector elements are : "; 
    for (ptr = ar.begin(); ptr < ar.end(); ptr++) 
        cout << *ptr << " ";
    cout<<"\n";
    sort(ar.begin(),ar.end());
		 
     //after sort   
     if(n%2==0)
     {
     	  j=n-1;
        for(i=0;i<n/2;i++)
        {
        	if(i<j)
        	cout<<ar[j];
        	cout<<ar[i];
        	j--;
		}

	 }
	 else
	 {
	 	  j=n-1;
        for(i=0;i<=n/2;i++)
        {
        	if(i<j)
        	cout<<ar[j];
        	cout<<ar[i];
        	j--;
		}

	 }
      
	return 0;
}
