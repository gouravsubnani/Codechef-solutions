#include <bits/stdc++.h>
#define ll long long int
#define mp map<char,ll>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    mp m;
	    for(int i = 0 ; i<s.length() ; i++)
	    {
	        m[s[i]]++;
	    }
	    if(m['1'] == 1 || m['0'] == 1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
