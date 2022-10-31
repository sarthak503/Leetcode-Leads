class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
       
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][j]!=mat[i-1][j-1])
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