class Solution
{
    public:
        vector <int> search(string pat, string txt){
            vector<int> ans;
            if(pat.length()>txt.length()){
                ans.push_back(-1);
                return ans;
            }
            for(int i=0;i<(txt.length()-pat.length()+1);i++){
                if(pat==txt.substr(i,pat.length()))
                    ans.push_back(i+1);
            }
            if(ans.size()!=0)
                return ans;
            else{
                ans.push_back(-1);
                return ans;
            }
                
        }
};
