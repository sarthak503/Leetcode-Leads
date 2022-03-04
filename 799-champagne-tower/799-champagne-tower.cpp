class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
      double a[101][101] = {0.0};
        a[0][0] = poured;
    
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                
                if (a[i][j] >= 1)
                {
                    a[i + 1][j]     += (a[i][j] - 1) / 2.0;
                    a[i + 1][j + 1] += (a[i][j] - 1) / 2.0;
                    a[i][j] = 1;
                }
            }
        }
        return a[query_row][query_glass];
    }
};