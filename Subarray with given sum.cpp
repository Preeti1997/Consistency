class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        
        int sum=0;
        int a=0;
        vector<int> ans;
        
        if(s==0)
        {
            ans.push_back(-1);
            return ans;
        }
        
        for(int i=0;i<n;i++)
        {
             sum=sum+arr[i];
             
             while(sum>s)
            {
                sum=sum-arr[a];
                a++;
            }
            
             if(sum==s)
            {
                ans.push_back(a+1);
                ans.push_back(i+1);
                return ans;
            }
            
        
        }
        ans.push_back(-1);
        
        return ans;
        
    }
};