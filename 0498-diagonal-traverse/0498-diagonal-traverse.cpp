class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
       map<int,vector<int>>um;
       vector<int>result;
       int rows=mat.size();
       int colns=mat[0].size();
       for(int i=0;i<rows;i++){
        for(int j=0;j<colns;j++){
              um[i+j].push_back(mat[i][j]);
        }
       }
    for(auto& pair: um){
        if(pair.first%2==0){
        reverse(pair.second.begin(), pair.second.end());
        }
    }    
    for(auto& pair: um){
        result.insert(result.end(), pair.second.begin(), pair.second.end());
    }          
   return result;
    }
};