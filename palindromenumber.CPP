#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    int rem=0;
    int temp;
    int res=0;
    temp=n;

    while(n)
    {
        rem=n%10;
        res=(res*10)+rem;
        n=n/10;
    }


    if((res-temp)==0)
        cout<<"palindrome";
    else
        cout<<"not a palindrome";
    return 0;
}
