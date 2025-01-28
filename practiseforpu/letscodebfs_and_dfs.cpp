#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a, b, c) for (ll i = a; i < b; i += c)

void BFS(int G[][7],int start,int n){
 ll i=start;
 queue<ll>q;
 ll visited[7]={0};
 cout<<i<<" ";
 visited[i]=1;
 q.push(i);
 while(!q.empty()){
    i=q.front();
    q.pop();
    for(ll j=1;j<=n;j++){
        if(G[i][j]==1 && visited[j]==0){
            cout<<j<<" ";
            visited[j]=1;
            q.push(j);
        }
    }
 }
}
void DFS(int G[][7],int start ,int n){
    static int visited[7]={0};
    if(visited[start]==0){
        cout<<start<<" ";
        visited[start]=1;
        for(ll j=1;j<=n;j++){
            if(G[start][j]==1 && visited[j]==0){
                DFS(G,j,n);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};
                   
    DFS(G, 4, 7);  // Starting from node 1
    return 0;
}