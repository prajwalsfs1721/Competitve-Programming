// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll n,p;cin>>n>>p;
    ll a[n+1][n+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
            cout<<1<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<"\n";
            cin>>a[i][j];
        }
    }
    cout<<2<<"\n";
     for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}