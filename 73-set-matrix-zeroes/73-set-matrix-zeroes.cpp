class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector <int> r(m,1);
        vector <int> c(n,1);
         for(int i=0;i<r.size();i++){
            for(int j=0;j<c.size();j++){
                if(matrix[i][j]==0)
                {
                    r[i]=0;c[j]=0;
                }
            }
        }
        
        for(int i=0;i<r.size();i++){
            if(r[i]==0){
            for(int j=0;j<c.size();j++){
                matrix[i][j]=0;
            }
        }
        }
        for(int i=0;i<c.size();i++){
            if(c[i]==0){
            for(int j=0;j<r.size();j++){
                matrix[j][i]=0;
            }
            }
        }   
    }
};