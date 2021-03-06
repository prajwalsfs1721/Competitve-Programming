#include<bits/stdc++.h>
using namespace std;
void dijikstra(int source,int dist[],vector<tuple<int,int>>t[],int n)
{
    int visited[n]={0};
    priority_queue<pair<int,int>> q;
    dist[source]=0;
    q.push({dist[source],source} );
    while (!q.empty())  
    {
        int v,w,s=q.top().second;q.pop();
        if(visited[s])continue;   
        visited[s]=1;
        // cout<<s<<" ";
        for(auto  i=t[s].begin();i!=t[s].end();i++)
        {
            tie(v,w)=*i;
            dist[v]=min(dist[v],dist[s]+w);
            q.push({-dist[v],v});
        }
    }
}
int main()
{
    int n,m;cin>>n>>m;
    vector<tuple<int,int>> t[n];
    int cn=n,cm=m;
    while (cm--)
    {
        int u,v,w;cin>>u>>v>>w;
        t[u].push_back(tie(v,w));
        t[v].push_back(tie(u,w));
    }
    int dist[n];
    memset(dist,INFINITY,n);
    dijikstra(0,dist,t,n);
    for(auto i=0;i<n;i++)
        cout<<i<<"::"<<dist[i]<<"\n";
}

/*

    5
    7
    0 1 5
    0 3 7
    0 2 3
    1 3 3
    1 4 2
    2 3 1
    3 4 2
*/