// link:https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/monk-and-palindromes/
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/**comments: AC in one go ;)
 * 
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
ll parent[100005]={0},size[100005]={0};
int find(ll a)
{
    if(parent[a]==a) return a;
    return parent[a]=find(parent[a]);    
}
void unio(ll a,ll b)
{
    a=find(a);
    b=find(b);
    if(a==b)return ;
    // if(size[a]<size[b]){ll t=a;a=b;b=t;}
    parent[b]=a;
    size[a]+=size[b];
    // size[a]%=mod;
}
void solve()
{
    ll n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){parent[i]=i;size[i]=1;}
    ll a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        for(int i=0;i<=ceil(b-a+1)/2.0;i++)
        {
            // cout<<i+a<<" "<<b-i<<"\n";
            unio(i+a,b-i);
        }
    }
    set<ll> s;
    for(int i=1;i<=n;i++)
    {
        s.insert(find(i));
    }
    ll ans=1;
    for(auto i:s)
    {
        ans*=10;
        ans%=mod;
    }
    cout<<ans<<"\n";
}



int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}