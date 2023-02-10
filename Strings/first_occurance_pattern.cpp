class Solution {
  public:
    int findMatching(string text, string pat) {
        if(pat.length()>text.length())
            return -1;
        int n=text.length();
        int m=pat.length();
        for(int i=0;i<(n-m+1);i++){
            string curr=text.substr(i,m);
            if(curr==pat)
                return i;
        }
        return -1;
    }
};
