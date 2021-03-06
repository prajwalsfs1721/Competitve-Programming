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
    ll n,t,m;cin>>n;
    vector<ll> pos,neg,v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
        if(t>0)pos.push_back(i);
        else if(t<0)neg.push_back(i);
    }
    ll ans=0;
    int j=0;
    for(int i=0;i<neg.size();){
        // cout<<i<<" "<<j<<'\n';
        if(j==pos.size() || pos[j]>neg[i]){ans+=abs(v[neg[i]]);i++;}
        else{
            int mn=min(v[pos[j]],abs(v[neg[i]]));
            v[pos[j]]-=mn;
            v[neg[i]]+=mn;
            j+=(v[pos[j]]==0);
            i+=(v[neg[i]]==0);
        }
    }
    cout<<ans<<"\n";
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