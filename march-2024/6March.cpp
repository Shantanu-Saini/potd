//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> search(string pattern, string text)
    {
        // code here.
        vector<int> ans;
        int p = pattern.length();
        int t = text.length();
        for (int i = 0; i <= t - p; i++)
        {
            bool flag = true;
            for (int j = 0; j < p; j++)
            {
                if (text[i + j] != pattern[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans.push_back(i + 1);
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
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends