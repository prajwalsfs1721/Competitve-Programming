// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/
// 648bbcc9cb1d50e58e08df0489e1031eb7095f19f139fa2657dcc9a1372a4fd8


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
    ll n,t,f=-1,m;cin>>n>>m;
    ll a[1003]={0};
    for(int i=0;i<n;i++){cin>>t;a[t]++;}
    for(int i=0;i<m;i++){cin>>t;
        if(a[t]!=0){
            f=t;
        }
    }
    if(f==-1){cout<<"NO\n";return;}
    cout<<"YES\n1 "<<f<<"\n";
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