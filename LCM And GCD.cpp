class Solution {
  public:
    
    int gcd(long long A , long long B)
    {
        if(B==0)
        return A;
        
        return gcd(B , A%B);
    }
   
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        
        int ans;
    
        ans =  gcd(A,B);
        vector<long long> a;
        long long b = A*B/ans;
        a.push_back(b);
        a.push_back(ans);
        return a;
    }
};