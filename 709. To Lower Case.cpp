class Solution {
public:
    string toLowerCase(string str) {
        string temp="";
        for(auto i:str){
            if(i >= 65 && i <= 90)
                temp += i+32;
            else temp += i;
        }
        return temp;
    }
};
