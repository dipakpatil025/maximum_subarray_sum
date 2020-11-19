// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// Function to find subarray with maximum sum

int maxSubarraySum(int a[], int n)
{
    int current = a[0];
    int overall = a[0];
    for (int i = 1; i < n; i++)
    {
        current += a[i];
        if (a[i] < current)
        {
            if (current > overall)
            {
                overall = current;
            }
            
        }
        else
        {
            current = a[i];
        }
        
    }
    return overall;
}

// { Driver Code Starts.

int main()
{
    int t, n;
    cout << "teastCase : ";
    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {
        cout << "Size : ";
        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        cout << maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends
