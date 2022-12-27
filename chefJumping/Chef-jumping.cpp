#include <bits/stdc++.h>
#define ll long long int
#define mp map<char,ll>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll a;
	cin>>a;
	ll ans = a%6;
	if(ans == 1 || ans == 0 || ans == 3)
	{
	    cout<<"yes"<<endl;
	}
	else
	{
	    cout<<"no"<<endl;
	}
	return 0;
}
