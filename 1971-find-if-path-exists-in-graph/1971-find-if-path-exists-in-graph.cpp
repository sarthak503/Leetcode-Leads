class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
    vector<int> adj[n];
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n+ 1, false);
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for (auto x : adj[f])
        {
            if (visited[x] == false)
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    
        
    return visited[d];
    }
};

 