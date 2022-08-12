class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix[0].size();j++)
            {
                temp=matrix[j][i];
                matrix[j][i]=matrix[i][j];
                matrix[i][j]=temp;
            }
        }
         for(int i=0;i<matrix.size();i++)
        {
             reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};