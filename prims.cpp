
#include<bits/stdc++.h>
using namespace std;





int main()
{
    
  
        int V, E;
        cout<<"give the number of vertices and edges";
        cin >> V >> E;
        cout<<"\ngive the adjecency matrix";
        //  int **adj=new int[V][V];
        int adj[V][V];
         for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                adj[i][j]=0;
            }
         }

        
        int i=0;
        while(i++<E){
            cout<<"Enter source , destinastion and weight";
            int u,v,w;
            adj[u][v]=adj[v][u]=w;

        }
        
        int vis[V]={0};
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                
            }
        }
    

    return 0;
}


