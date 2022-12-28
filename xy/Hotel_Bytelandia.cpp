// Gourav Subnani
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp map<string,ll>
#define vec vector<ll>
#define sett set<ll>
#define mod 998244353


void printmap(mp m)
{
    for(auto value : m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}

void printvec(vec v)
{
	for(auto value: v)
	{
		cout<<value<<" ";
	}
    cout<<endl;
}

bool poweroftwo(long long x)
{
    if(x&(x-1))
    {
        return false;
    }
    else
    {
        return true;
    } 
}

void printbinary(int num)
{
    for(int i = 31 ; i>=0 ; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int modmultiply(int a, int b, int c, int d) {
    int x = 1;
    x = ((x % mod) * (a % mod)) % mod;
    x = ((x % mod) * (b % mod)) % mod;
    x = ((x % mod) * (c % mod)) % mod;
    x = ((x % mod) * (d % mod)) % mod;
    return x;
}

/*****************************BIT MANIPULATION****************************************
UNSET TO SET = (a | (1<<i)) (ith bit set of a)
SET TO UNSET = (a & (~(1<<i))) (ith bit unset of a)
toggle ith bit of a = (a^(1<<i))
setbit count(int) = __builtin_popcount(a)
setbit count(ll) = __builtin_popcountll(a)
lower case to uppercase = (a&'_')
upper case to lowercase = (A|' ') 
*************************************************************************************/


int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    // unordered_map<int , int> umap;
        int n;
        cin>>n;
        int a[n] , b[n];
        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        int mx = 0;
        int index = 0;
        for(int i = 0 ; i<n ; i++)
        {
            cin>>b[i];
            if(b[i] > mx)
            {
                mx = b[i];
                index = i;
            }
        }
        int temp = a[index];
        int count = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(b[i]>temp)
            {
                // cout<<b[i]<<" "<<temp<<endl;
                count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
