#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, h;
        cin >> n >> h;
        
        vector<int> strengths(n);
        for (int i = 0; i < n; i++) {
            cin >> strengths[i];
        }
        
        sort(strengths.begin(), strengths.end());
        
        int low = 0;  // Minimum resistance possible.
        int high = strengths[n - 1];  // Maximum resistance possible.
        int result = high;  // Initialize the result with the maximum possible resistance.
        
        // Binary search to find the minimum resistance needed.
        while (low <= high) {
            int mid = (low + high) / 2;
            
            // Calculate Chef's strength after fighting all enemies with resistance = mid.
            long long remaining_strength = h;
            for (int i = 0; i < n; i++) {
                if (strengths[i] <= mid) {
                    // No strength loss.
                } else {
                    // Chef's strength decreases by the enemy's strength.
                    remaining_strength -= (strengths[i] - mid);
                }
                
                // If Chef's strength becomes negative, he can't defeat all enemies with this resistance.
                if (remaining_strength < 0) {
                    break;
                }
            }
            
            if (remaining_strength >= 0) {
                // Chef can defeat all enemies with resistance = mid.
                result = min(result, mid);
                high = mid - 1;
            } else {
                // Chef can't defeat all enemies with resistance = mid.
                low = mid + 1;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
