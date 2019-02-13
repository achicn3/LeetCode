class Solution {
public:
    bool judgeCircle(string moves) {
        int sum=0;
        for(auto i:moves){
            if(i == 'U')sum++;
            else if(i=='D')sum--;
            else if(i=='L')sum+=2;
            else if(i=='R')sum-=2;
        }
        return !sum;
    }
};
