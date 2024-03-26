class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int sum = 0;
 
    // Size of array
    int l = arr.size();
 
    // Traverse the array
    for (int i = 0; i < l; i++) {
 
        // Generate all subarray of
        // odd length
        for (int j = i; j < l; j += 2) {
 
            for (int k = i; k <= j; k++) {
 
                // Add the element to sum
                sum += arr[k];
            }
        }
    }
 
    // Return the final sum
    return sum;
    }

};