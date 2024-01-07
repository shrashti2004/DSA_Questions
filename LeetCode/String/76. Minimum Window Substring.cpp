class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()==0||t.length()==0||s.length()<t.length())
        return "";

        vector<int>v(256,0);
        for(int i=0;i<t.length();i++)
        v[t[i]]++;  //store the frequency of letter 

    int start =0 ,end=0,ans=0;
    int minlength=INT_MAX;
    int count=0;

 while(end<s.length())
{

    if(v[s[end]]>0) //frequency 
    {
        count++;
    }
    v[s[end]]--;

while(count==(int)t.length())   {
    if(minlength>end-start+1) {
        minlength=end-start+1;
        ans=start;
    }
    v[s[start]]++;
    if(v[s[start]]>0)
    count--;

    start++;
}    
        end++;
    }
    if(minlength==INT_MAX) {
    return ""; }
    return s.substr(ans,minlength);
    }
};
