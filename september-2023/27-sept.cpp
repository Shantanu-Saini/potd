//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function teamplate for C++

class Solution
{
public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x)
    {
        // code here
        vector<int> ans;
        int minDiff = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = arr[i] + brr[j];
                int diff = abs(sum - x);
                if (diff == 0)
                {
                    ans.push_back(arr[i]);
                    ans.push_back(brr[j]);
                    return ans;
                }
                else if (diff < minDiff)
                {
                    minDiff = diff;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i] - brr[j] == minDiff)
                {
                    ans.push_back(arr[i]);
                    ans.push_back(brr[i]);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    int m, n, x;
    while (t--)
    {
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        cin >> x;

        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
    }
    return 0;
}

// } Driver Code Ends