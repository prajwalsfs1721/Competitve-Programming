// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,bd))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end()) 



typedef long long int ll;
ll check(ll n )
{
    ll ans=n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
            {ans=min(n/i,i);break;}
    }
    return ans;
}
void solve()
{
    ll n,k;cin>>n>>k;
    if(n%2==1)    
         {n+=check(n);k--;}
    n+=2*k; 
    cout<<n<<"\n";
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}