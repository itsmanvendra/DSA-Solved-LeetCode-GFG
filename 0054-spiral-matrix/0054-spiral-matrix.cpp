class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startCol = 0;
        int startRow = 0;
        int endRow = matrix.size()-1;
        int endCol = matrix[0].size()-1;
        vector<int>ans;
        bool a = false;
        while(startCol <= endCol && startRow <= endRow){
            for(int i = startCol; i<=endCol; i++){
                ans.push_back(matrix[startRow][i]);
                a = true;
            }
            if(a){
              startRow++;
                a = false;
            }
            else{
                break;
            }
            
            
            for(int i = startRow; i<= endRow; i++){
                ans.push_back(matrix[i][endCol]);
                a = true;
            }
            if(a){
              endCol--;
                a = false;
            }
            
            else{
                break;
            }
            for(int i = endCol; i>=startCol; i--){
                ans.push_back(matrix[endRow][i]);
                a = true;
            }
            if(a){
              endRow--;
                a = false;
            }
            else{
                break;
            }
            
            for(int i = endRow; i>=startRow; i--){
                ans.push_back(matrix[i][startCol]);
                 a= true;
            }
            if(a){
              startCol++;
                a = false;
            }
            else{
                break;
            }
            
        }
        return ans;
        
    }
};