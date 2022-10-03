#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<int>Arr){
  for(int i=0;i<Arr.size();i++)
  {
    cout<<Arr[i]<<" ";
  }
    cout<<endl;
}
void dfs(int node,vector<int>vec[],vector<int>&vis,vector<int>&dfsvec)
{
vis[node]=1;
dfsvec.push_back(node);
for(auto it:vec[node])
{ if(!vis[it])
     {
       dfs(it,vec,vis,dfsvec)  ;

     }
}
}
vector<int>GraphofDfs(int n,vector<int>vec[])
{

    vector<int>vis(n+1,0);
    vector<int>dfsvec;
    for(int i=1;i<=n;i++)
    { if(!vis[i]){
    dfs(i,vec,vis,dfsvec);
    }
    }
    return dfsvec;
}

int main()
{
    int N,M;
    cin>>N>>M;
    vector<int>V[N+1];
    for(int i=0;i<M;i++){
            int v,u;
           cin>>v>>u;
        V[v].push_back(u);
        V[u].push_back(v);
          }
for(int i=1;i<=N;i++)
 {
     cout<<i<<"-";
     printvector(V[i]);
 }
 vector<int> ans;
 ans=GraphofDfs(N,V);
printvector(ans);

    return 0;
}
