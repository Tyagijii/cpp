#include<iostream>

using namespace std;

long long int fibo(int n)
{
	if (n==1) return 0;
	if (n==2) return 1;
	return fibo(n-1)+fibo(n-2);
}

long long int fibo2(int n)
{
	if (n==1 || n==2)
	{
		return (n==1)?0:1;
	}
	long long int l=0,sl=1;
	long long int cur=0;
	for (int i=2;i<n;i++)
	{
		cur=l+sl;
		l=sl;
		sl=cur;
	}
	return cur;
}

int main()
{
	long long int x=fibo2(95);
	cout<<x;
}
