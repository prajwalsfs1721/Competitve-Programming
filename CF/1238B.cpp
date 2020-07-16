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
    ll n,t,a,off=0,m,f=0,ans=0;cin>>n>>m;
    vector<ll> v;
    for(int i=0;i<n;i++){cin>>t;
         v.push_back(t);
    }
    set<ll> s(v.begin(),v.end());
    vector<ll> d(s.begin(),s.end());
    reverse(d.begin(),d.end());
    // if(n-f==0){cout<<"1\n";return;}
    // if(n-f==1){cout<<"2\n";return;}
    for(int i=0;i<d.size();i++)
    {
        if(d[i]-off>0){ans++;off+=m;}
        else break;
    }
    cout<<(ans)<<"\n";

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