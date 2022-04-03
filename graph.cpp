#include <bits/stdc++.h>
#include<queue>
using namespace std;
void print(int **edge,int n,int sv,int *visited)
{
    cout<<sv<<endl;
    visited[sv]=1;
    for(int i=0;i<n;i++)
    {
        if(i==sv)
        {
            continue;
        }
        if(edge[sv][i]==1&&visited[i]==0)
        {
            print(edge,n,i,visited);
        }
    }
}
void bfs(int **edge,int n,int sv,int *visited)
{
    queue<int>q;
    q.push(sv);
    visited[sv]=1;
    while(!q.empty())
    {
        int p=q.front();
        cout<<p<<endl;
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(edge[p][i]==1&&visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
            }
        }

    }
}
int main()
{
    int n,e;
    cout<<"enter n and e"<<endl;
    cin>>n>>e;
    int **edge=new int*[n];
    for(int i=0;i<n;i++)
    {
        edge[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            edge[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int sv,ev;
        cout<<"enter starting and ending vertex"<<endl;
        cin>>sv>>ev;
        edge[sv][ev]=1;
    }
    int *visited=new int[n];
    for(int i=0;i<n;i++)
    {

        visited[i]=0;
    }
    bfs(edge,n,2,visited);

}
