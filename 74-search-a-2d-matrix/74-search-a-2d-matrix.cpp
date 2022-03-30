class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag=0;
        for(int i=0;i<matrix.size();i++){
            int l=matrix[i].size();
            if(target>=matrix[i][0] && target<=matrix[i][l-1]){
                for(int j=0;j<l;j++){
                    if(target==matrix[i][j]){
                      flag=1;
                      break;
                    }
                }                
            }
        }
        if(flag==1)
            return true;
        return false;
    }
};