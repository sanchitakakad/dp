#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2)
{
	int l1=s1.length();
	int l2=s2.length();
	int max1=0;
	int a[l1+1][l2+1];
	for(int i=0;i<=l1;i++)
	{
		for(int j=0;j<=l2;j++)
		{
			if(i==0 || j==0)
			{
				a[i][j]=0;
				continue;
			}
			else if(s1[i-1]==s2[j-1])
			{
				a[i][j]=a[i-1][j-1]+1;
			}
			else
			{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
			if(a[i][j]>max1)
				max1=a[i][j];
		}
	}
	for(int i=0;i<l1+1;i++)
	{
		for(int j=0;j<l2+1;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return max1;
}
int main()
{
	string s1,s2;
	cout<<"\nenter strings ";
	cin>>s1;
	cin>>s2;
	int l1=s1.length();
	int l2=s2.length();
	
	cout<<lcs(s1,s2);
	return 0;

}
