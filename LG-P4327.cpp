#include<bits/stdc++.h>
using namespace std;
char a[1500],x[1500][1500],n,t;
int main()
{
	int i,j,k;
	cin>>a;
	t=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		n+=5;
		if(i+1%3!=0)
		{
			for(j=n;j<=n+5;j++)	
			{
				for(k=n;k<=n+5;k++)
				{
					if(j==1&&x[j][k]!='*')
					{
						if(k==1||k==2||k==4||k==5)
							x[j][k]='.';
						if(k==3)
							x[j][k]='#';		
					}
					if(j==2&&x[n][j]!='*')
					{
						if(k==1||k==3||k==5)
							x[j][k]='.';
						if(k==2||k==4)
							x[j][k]='#';
					}
					if(j==3&&x[j][k]!='*')
					{
						if(k==1||k==5)
							x[j][k]='#';
						if(k==2||k==4)
							x[j][k]='.';
						if(k==3)
							x[j][k]=a[i];
					}
					if(j==4&&x[j][k]!='*')
					{
						if(k==1||k==3||k==5)
							x[j][k]='.';
						if(k==2||k==4)
							x[j][k]='#';						
					}
					if(j==5&&x[j][k]!='*')
					{
						if(k==1||k==2||k==4||k==5)
							x[j][k]='.';
						if(k==3)
							x[j][k]='#';						
					}				
				}				
			}
		
		}
		if(i+1%3==0)
		{
			for(j=n;j<=n+5;j++)	
			{
				for(k=n;k<=n+5;k++)
				{
					if(j==1)
					{
						if(k==1||k==2||k==4||k==5)
							x[j][k]='.';
						if(k==3)
							x[j][k]='*';		
					}
					if(j==2)
					{
						if(k==1||k==3||k==5)
							x[j][k]='.';
						if(k==2||k==4)
							x[j][k]='*';
					}
					if(j==3)
					{
						if(k==1||k==5)
							x[j][k]='*';
						if(k==2||k==4)
							x[j][k]='.';
						if(k==3)
							x[j][k]=a[i];
					}
					if(j==4)
					{
						if(k==1||k==3||k==5)
							x[j][k]='.';
						if(k==2||k==4)
							x[j][k]='*';						
					}
					if(j==5)
					{
						if(k==1||k==2||k==4||k==5)
							x[j][k]='.';
						if(k==3)
							x[j][k]='*';						
					}				
				}				
			}
		
		}
	}
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=100;j++)
		{
			cout<<x[i][j];
		}	
		cout<<endl;	
	}

} 
