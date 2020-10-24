#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int  main(){
	int n;
	cin>>n;
	int p[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		sum+=p[i];
	}


	if(sum%3!=0)
		cout<<"0"<<endl;
	else
	{
		int par[sum+1][n+1];

		for(int i=0;i<=sum;i++){
			int c=0;
			for(int j=0;j<=n;j++)

			{

				if(i==0)
					par[i][j]=1;
				else if(j==0 && i!=0)
					par[i][j]=0;
				else if(p[j-1]<=i)
					par[i][j] = (par[i][j-1] || par[i-p[j-1]][j-1]);
				else
					par[i][j] = par[i][j-1];
				if(par[i][j]==1)
					c++;

			}
			if(i==sum/3 && c>1)
				cout<<"1"<<endl;
			else if(i==sum/3)
				cout<<"0"<<endl;
	    }

	}

	return 0;

}
