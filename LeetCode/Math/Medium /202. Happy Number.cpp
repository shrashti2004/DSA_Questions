// class Solution {
// public:
//     int solve(int n){
//         int x=0;
//         while(n>0){
//             int c=n%10;
//             x=x+c*c;
//             n=n/10;
//         }
//         return x;
//     }
//     bool isHappy(int n) {
//         unordered_set<int> sett;
//         while(n!=1 && !sett.count(n)){
//             sett.insert(n);
//             n=solve(n);
//             cout<<n<<" ";
//         }
//         if(n==1)return true;
//         return false;
//     }
// };
class Solution {
    int getSum(int n) {
        int sum = 0;
        while (n > 0) {
            int num = n % 10;
            sum += num * num;
            n = n/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> res;
        int sum = getSum(n);
        while (sum != 1) {
            n = sum;
            sum = getSum(n);
            if (res.find(sum) != res.end()) return false;
            res.insert(sum);
        }
        return true;
    }
};
