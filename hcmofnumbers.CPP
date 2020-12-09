#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of terms";
    cin>>n;



    int a[n],small,i;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element";
        cin>>a[i];
    }


    small=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }

int j=1;
int flag=0;
int res;
if (small==1)
    cout<<"1";
else
{
    while(small-j)
{
    for(i=0;i<n;i++)
    {
        if(a[i]%j==0)
        {
            flag++;
        }
        if(flag==n)
        {
            res=j;
        }
        if(i==(n-1))
        {
            flag=0;
            j++;
        }
    }

}
cout<<res;
}
    return 0;
}
