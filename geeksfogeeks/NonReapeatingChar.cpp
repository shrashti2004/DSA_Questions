class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
           map<char, int>m;
    for(int i=0;i<S.size();i++){
     m[S[i]]++ ;
    }
  for(int i =0;i<S.size();i++){
      if(m[S[i]==1]){
          return S[i] ;
      }
  }
   return '\0'; 
    }

};
