class Solution {
public:
     bool cycle(int s,vector<bool> &visited,vector<bool> &dfsVisited,vector<int> adj[]){
        visited[s]=true;
        dfsVisited[s]=true;
        for(auto x:adj[s]){
            if (!visited[x])
            {
            if (cycle(x,visited,dfsVisited,adj))
                return true;
            }
            else if (visited[x]==true && dfsVisited[x]==true)
                return true;
        }
        dfsVisited[s]=false;
        return false;
        
    }
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<bool> visited(V, false);
        vector<bool> dfsVisited(V, false);
        
        vector<int> adj[V];
        for (auto x:prerequisites)
        {
             vector<int> da=x;
            int a=da[0];
            int b=da[1];
            adj[a].push_back(b);
        }
        
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (cycle(i,visited,dfsVisited,adj))
                    return false;
               
            }
        }
        return true;
    }
};