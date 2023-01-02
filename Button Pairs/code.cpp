// Gourav Subnani
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
        ll o=0,e=0;
	    for(ll i = 0 ; i<n ; i++)
	    {
	        cin>>arr[i];
            if(arr[i]%2 == 1)
            {
                o++;
            }
            else
            {
                e++;
            }
	    }
	    ll ans = o*e;
	    // for(int i = 0 ; i<n ; i++)
	    // {
	    //     for(int j = i+1 ; j<n ; j++)
	    //     {
	    //         if((arr[i] + arr[j])%2 == 1)
	    //         {
	    //             ans++;
	    //         }
	    //     }
	    // }
	    cout<<ans<<endl;
	}
	return 0;
}
