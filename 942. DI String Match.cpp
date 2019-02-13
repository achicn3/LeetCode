class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> temp;
        int I=0,D=S.size();
        for(auto s:S){
            if(s =='I')temp.push_back(I++);
            else temp.push_back(D--);
        }
        temp.push_back(D);
        return temp;
    }
};
