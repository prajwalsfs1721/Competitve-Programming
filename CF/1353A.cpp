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
	ll n,m;
	cin>>n>>m;
	
	
	
	
	if(n==1){cout<<"0"<<"\n";return;}
    if(n==2){cout<<m<<"\n";return;}
	if(n==3 || n==4){cout<<m*2<<"\n";return;}
	ll ele = m/2;
	if(m%2==0)
		cout<<m*2<<"\n";

	else
		cout<<max(m*2,ele*2+((ele+1)*2))<<"\n";
	
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