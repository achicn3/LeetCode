class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++){
            //use stl container 'reverse' to reverse array
            //or you can write a reverse function 
            reverse(A[i].begin(),A[i].end());
            for(int j=0;j<A[i].size();j++){
                //just flip
                A[i][j] = 0 ? A[i][j] == 1 :
                A[i][j] = 1 ? A[i][j] == 0 :
                A[i][j];
            }
        }
        return A;
    }
};
