#include<iostream>
using namespace std;
int main()
{
 int N,sum=0,i,j;
 cin>>N; 
 int stone[N];
for(i=0;i<N;i++)
cin>>stone[i];
for(i=0;i<N;i++)
	sum=sum+stone[i];
for(i=0;i<N;i++)
	for(j=i+1;j<N;j++)
		if(stone[i]==stone[j])
			sum++;
cout<<"The total stone weight is\t:\t"<<sum;
return 0;
}