class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> temp;
        for(int i=0;i<A.size();i++){
            A[i]= pow(A[i],2);
        }
        sort(A.begin(),A.end());
        return A;
    }
};
//Memory Usage less than 100%
