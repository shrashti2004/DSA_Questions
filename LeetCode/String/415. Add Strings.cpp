class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int c=0,i=num1.size()-1,j=num2.size()-1;
        while(i>=0||j>=0 ||c==1){
            c+=i>=0?num1[i--]-'0':0;
            c+=j>=0?num2[j--]-'0':0;
            res=char(c%10+'0')+res;
            c/=10;
        }
        
        return res;
    }
};
