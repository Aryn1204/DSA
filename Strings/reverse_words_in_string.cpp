class Solution{
public:
    string reverseWords(string S) { 
        string answer="";
        string temp="";
        string ans="";
        for(int i=0;i<S.length();i++){
            if(S[i+1]=='\0'){
              temp+=S[i];
              ans='.'+temp+ans;  
            }
            if(S[i]!='.')
                temp+=S[i];
            else{
                ans='.'+temp+ans;
                temp="";
            }
        }
        answer=ans.substr(1);
        return answer;
    } 
};
