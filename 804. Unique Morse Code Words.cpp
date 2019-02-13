class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string table[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string temp = "";
            for(int j=0;j<words[i].size();j++){
                temp += table[words[i][j] - 97];
                // words[i][j] - 97 means translate char to intger
                // so if words[i][j] = g and minus 97 will equal 6(103-97)
                // the sixth position in table is "--." , put "--." in string temp
            }
            words[i]= temp;
        }
        //following 2 line prevent duplicate
        sort(words.begin(),words.end());
        words.erase(unique(words.begin(),words.end()) , words.end());
        return words.size();
    }
};
//beats 100% in C++
