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
	    int n;
        cin>>n;
        int a[n] , b[n];
        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i]; // likes
        }
        for(int i = 0 ; i<n ; i++)
        {
            cin>>b[i]; // coments
        }
        int index = 0;
        int mx = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(a[i] > mx)
            {
                mx = a[i];
                index = i;
            }
            else if(a[i] == mx)
            {
                if(b[i]>b[index])
                {
                    index = i;
                }
                else
                {
                    continue;
                }
            }
        }
        cout<<index+1<<endl;
	}
	return 0;
}