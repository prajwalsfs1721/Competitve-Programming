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
    ll n,t,m=0,r=0;cin>>n;
    string mn,wn;cin>>wn>>mn;
    for(int i=0;i<n;i++){if(mn[i]=='r')r++;else m++;}
    for(int i=0;i<n;i++){
        if(wn[i]=='r' && r==0 || wn[i]=='m' && m==0)break;
        if(wn[i]=='r')r--;
        else m--;
        }
    cout<<r+m;
    // cout<<r<<" "<<m<<"\n";
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