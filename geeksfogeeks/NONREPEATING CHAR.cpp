char nonrepeatingCharacter(string S)
    {
       map<char, int>count;
       for(int i=0; i<S.size(); i++){
       count[S[i]]++;
   }
       
     for(int i=0; i<S.size(); i++){
      if(count[S[i]]==1){
          return S[i];
      }
      
   }
   return '$';
   }
