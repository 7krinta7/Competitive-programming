//54. Spiral Matrix
//https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;int right=n-1,left=0,bottom=m-1;
        vector<int>v;
        while(v.size()<n*m){
            for(int i=left;i<=right;i++){
                if(v.size()==n*m)
                break;
            v.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                if(v.size()==n*m)
                break;
            v.push_back(matrix[i][right]);
            }
            right--;
            for(int i=right;i>=left;i--){
                if(v.size()==n*m)
                break;
            v.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                if(v.size()==n*m)
                break;
            v.push_back(matrix[i][left]);
            }
            left++;
        }
        return v;
    }
};