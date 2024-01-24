class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
         int n = rectangles.size();
        map<double,int>m;
        for(int i = 0;i<n;i++)  {
           double a=rectangles[i][0];
           double b=rectangles[i][1];
           double temp =a/b;
           m[temp]++;
      }     
     long  ans =0;
      for(auto k:m){
          if(k.second>1){
          long  n =k.second-1;
          ans+=(n*(n+1))/2;
      }
      }
      return ans ;
    
    }
};
