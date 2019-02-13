class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        vector<string>temp;
        for(int i=0;i<emails.size();i++){
            int plusPos = emails[i].find('+'); //find where is "+" symbol
            int atSingPos = emails[i].find('@'); //find where is "@" symbol
            int dotPos = emails[i].find('.');   //find where is "." symbol
            while(dotPos<atSingPos && dotPos<plusPos && dotPos >0){
                emails[i].erase(emails[i].begin()+dotPos,emails[i].begin()+dotPos+1);
                dotPos = emails[i].find('.');
            }
            //Becasue deleted "." symbol we have find where is "@" agian.
            plusPos = emails[i].find('+'); 
            atSingPos = emails[i].find('@'); 
             //remove words after '+' and before '@'
            if(plusPos >0)//must check "." exists
                emails[i].erase(emails[i].begin()+plusPos,emails[i].begin()+atSingPos);
            //prevent duplicate 
            if(temp.empty() || find(temp.begin(),temp.end(),emails[i])==temp.end() )
                temp.push_back(emails[i]);
        }
        return temp.size();
    }
};
