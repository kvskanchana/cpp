#include <iostream>
using namespace std;
int main()
{
int N;
cin>>N;
int A[N];
for(int i=0;i<N;i++)
{
cin>>A[i];
}
int M;
cin>>M;
int B[M];
for(int i=0;i<M;i++)
{
cin>>B[i];
}
int y=max(A[N-1],B[M-1]);
for(int i=0;i<y;i++)
{
int count=0;
for(int j=0;j<N;j++)
{
for(int k=0;k<M;k++)
{
if((i+A[j])==B[k])
{
count++;
}
}
}

//cout<<count<<endl;
if(count==N)
{
cout<<i<<" ";
}
}
return 0;
}
