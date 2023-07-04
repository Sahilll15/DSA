//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
   int findZeroes(int arr[], int n, int m) {
    int left = 0; // Left pointer of the window
    int right = 0; // Right pointer of the window
    int countZeros = 0; // Count of zeros in the current window
    int maxCount = 0; // Maximum count of consecutive ones
    
    while (right < n) {
        // If the current element is zero, increment the count of zeros
        if (arr[right] == 0) {
            countZeros++;
        }
        
        // If the count of zeros exceeds the allowed flips (m), move the left pointer to the right
        while (countZeros > m) {
            // If the left element is zero, decrement the count of zeros
            if (arr[left] == 0) {
                countZeros--;
            }
            left++;
        }
        
        // Update the maximum count of consecutive ones
        maxCount = max(maxCount, right - left + 1);
        
        right++; // Move the right pointer to the right
    }
    
    return maxCount;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends