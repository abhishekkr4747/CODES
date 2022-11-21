class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int rev = 0;
		    int x = n;
		    while(n!=0)
		    {
		       int digit = n % 10;
		       n = n/10;
		       rev = rev*10 + digit;
		    }
		    if(x==rev)
		    {
		        return "Yes";   
		    }
		    return "No";
		}
};