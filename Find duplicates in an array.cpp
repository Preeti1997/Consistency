https : // practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

        class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here 0 1 1 1 2 333 4  1
        sort(arr, arr + n);
        vector<int> ans;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                ans.push_back(arr[i]);
                while (arr[i] == arr[i + 1])
                {
                    i++;
                }
            }
        }
        if (ans.size() == 0)
        {
            return {-1};
        }
        return ans;
    }
};