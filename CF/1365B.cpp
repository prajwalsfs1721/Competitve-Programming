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
    ll n,t,f=0;cin>>n;
    vector<ll> v,p;
    v.push_back(-1);
    for(int i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
        if(t<v[i])f=1;
    }
    ll o=0,z=0;
    for(int i=0;i<n;i++)
    {   cin>>t;if(t==1)o=1;
        else  z=1;
    }
    if(o==1 && z==1 || f==0)cout<<"Yes\n";
    else cout<<"No\n";

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