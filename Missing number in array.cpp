// User function template for C++

class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        int sum = 0;
        int sumofn = 0;

        for (int i = 0; i < n - 1; i++)
        {
            sum = sum + array[i];
            // cout<<sum<<" ";
        }

        sumofn = (n * (n + 1)) / 2;
        // //cout<<sumofn;
        // cout<<sum;
        return sumofn - sum;
    }
};