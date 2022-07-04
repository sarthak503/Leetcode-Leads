class Solution {
public:
    bool cycle(int s,vector<bool> &visited,vector<bool> &dfsVisited,vector<vector<int>> &adj,vector<bool> &present_cycle){
        visited[s]=true;
        dfsVisited[s]=true;
        for(auto x:adj[s]){
            if (!visited[x])
            {
            if (cycle(x,visited,dfsVisited,adj,present_cycle))
                return present_cycle[s]=true;
            }
            else if (visited[x]==true && dfsVisited[x]==true)
                return present_cycle[s]=true;
        }
        dfsVisited[s]=false;
        return false;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V=adj.size();
        vector<bool> visited(V, false);
        vector<bool> dfsVisited(V, false);
        vector<int> ans;
        vector<bool> present_cycle(V,false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                cycle(i,visited,dfsVisited,adj,present_cycle);
               
            }
        }
        for (int i = 0; i < V; i++)
         {
            if (!present_cycle[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};