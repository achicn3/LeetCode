class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int temp[10001]={0};
        for(auto i:A){
            temp[i]++;
            if(temp[i]>=2)return i;
        }
        return 0;
    }
};
//easy follow
