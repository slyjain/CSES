#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
//typedef long long ll;
typedef vector<int > vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
//n-vertices and m - edgtes
//length of path is the number of edges bw it
//cycle is a path where the 1st node and the last node a re the same
#define V 5
int parent[V];
int find(int i){
    while(parent[i]!=i){
        i=parent[i];
    }
    return i;
}
void unionl(int i,int j){
    int a=find(i);
    int b=find(j);
    parent[a]=b;
}
void kruskalMST(int cost[][V]){
    int mincost=0;
    for(int i=0;i<V;i++){
        parent[i]=i;
    }
    int edge_count=0;
    while(edge_count<V-1){
        int min=INT_MAX,a=-1,b=-1;
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(find(i)!=find(j) && cost[i][j]<min){
                    min=cost[i][j];
                    a=i;b=j;
                }
            }
        }
        unionl(a,b);
        printf("Edge %d: (%d,%d) cost:%d\n",edge_count,a,b,min);
        mincost+=min;
    }
    cout<<"Minimum cost=%d\n"<<mincost;
}
int main()
{
    //vi adj[N];
    //if the graph is weightd- vector<pi> adj[N]
    int inf =INT_MAX;
    int cost[][V]={
        {inf,2,inf,6,inf},
        {2,inf,3,8,5},
        {inf,3,inf,inf,7},
        {6,8,inf,inf,9},
        {inf,5,7,9,inf}
    };
    kruskalMST(cost);
    return 0;
}