#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int a[n];
    int flag=1;
    int check=0;
    int i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    i=2;
    while(flag)
    {
     for(int j=0;j<n;j++)
     {
        if(i%a[j]>0)
        {
            flag=1;
            break;
        }
        else
          flag=0;
     }
     i++;
    }
    i=i-1;
    cout<<i;
    return 0;
}
