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
	    ll a;
        cin>>a;
        if(a<6)
        {
            cout<<-1<<endl;
        }
        else
        {
            int flag = 0;
            for(ll i = 2 ; i<=sqrt(a) ; i++)
            {
                if(a%i == 0)
                {
                    ll g = a/i;
                    ll temp = a/g;
                    if(g != temp)
                    {
                        flag = 1;
                        cout<<1<<" "<<g<<" "<<temp<<endl;
                        break;
                    }
                }
            } // 1/2 * o(n)
            if(!flag)
            {
                cout<<-1<<endl;
            }
        }
	}
	return 0;
}