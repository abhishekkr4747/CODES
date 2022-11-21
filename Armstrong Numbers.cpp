class Solution {
  public:
    string armstrongNumber(int n){
        int i=3;
        int sum = 0 , x=n;
        while(i)
        {
          int digit = n % 10;
          n = n/10;
          sum = sum + pow(digit , 3);
          i--;
        }
        if(sum==x) return "Yes";
        return "No";
    }
};