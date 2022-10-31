class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        bool a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(i==0 || j==0)
                a[i][j]=true;
            else
                a[i][j]=false;
            }
        }
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][j]==mat[i-1][j-1])
                    a[i][j]=true;
            }
         }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==false)
                    return false;
            }
         }
        return true;
        //    0 1 2 3   
        // 0 [T,T,T,T]
        // 1 [T,F,F,F]
        // 2 [T,F,F,F]
        // 3 [T,F,F,F]
        
    }
};