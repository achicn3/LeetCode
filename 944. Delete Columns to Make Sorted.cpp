// Problem description is like piece of shit....
class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        if( A.empty()|| A[0].size()==1 ) return 0;
        int deleteion=0;
        for(int i=0;i<A[0].size();i++){
            for(int j=0;j<A.size()-1;j++){
                if(A[j][i]>A[j+1][i]){
                    deleteion++;
                    break;
                }
            }
        }
        return deleteion;
    }
};
