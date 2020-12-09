#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int rem,sum=0,i=0;
    cout<<"enter the binary number";
    cin>>n;
    while(n)
    {
        rem=n%10;
        sum=sum+(pow(2,i)*rem);
        n=n/10;
        i++;
    }
    cout<<"result"<<sum;
    return 0;
}
