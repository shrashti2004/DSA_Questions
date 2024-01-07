class Solution {
public:
    int characterReplacement(string s, int k) {
    int start=0;
    int n=s.size();
    int maxFreq=0;
    int maxLen=0; 
    unordered_map<char,int>Freq;
    for(int end=0;end<n;end++){
      Freq[s[end]]++;
      maxFreq=max(maxFreq,Freq[s[end]]);
      //length-maxFreq<=k
      while((end-start+1)-maxFreq>k){
          Freq[s[start]]--;
          start++;
      }
     maxLen=max(maxLen,end-start+1);
        }
        return maxLen;
    }
    
};
