//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{ 
    vector<string> A;
queue<string> Q ;
 Q.push("1");
 while(N--) {
     
     string temp1=  Q.front();
     Q.pop();
     A.push_back(temp1);
     string temp2 =temp1 ;
      Q.push(temp1.append("0"));
        Q.push(temp2.append("1"));
    
 }
 return A ;

}
