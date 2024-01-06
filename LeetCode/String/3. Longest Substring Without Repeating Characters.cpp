class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int end=0,start=0,n=s.size();
     int ans=0;
     unordered_set<char> st;
     while(start<n){
         if(st.find(s[start])==st.end())//to find "a"
         
         {
             st.insert(s[start]);
             ans = std::max(ans, start - end + 1); //to find maximum
             start++;
         }
         else { //agr set mein phele se presrnt hai toh erase 
             st.erase(s[end]);
             end++;
         }
     }
     return ans;
    }
};
