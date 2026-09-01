class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int> a; // Holds negative numbers
        vector<int> b; // Holds positive numbers
        vector<int> res;
        int n = arr.size(); 

        // Step 1: Separate negative and non-negative numbers
        for (int i = 0; i < n; i++) { 
            if (arr[i] >= 0) {
                b.push_back(arr[i]);
            } else {
                a.push_back(arr[i]);
            }
        }

        // Handle case where array has no negative numbers
        if (a.size() == 0) {
            for (int i = 0; i < n; i++) {
                arr[i] = arr[i] * arr[i];
            }
            return arr; 
        }

        // Handle case where array has no positive numbers
        if (b.size() == 0) {
            for (int i = 0; i < n; i++) {
                arr[i] = arr[i] * arr[i];
            }
            reverse(arr.begin(), arr.end()); // Fixed: Reverse once outside the loop
            return arr; // Fixed: Moved return outside the loop
        }

        int p = a.size();
        int q = b.size();

        // Step 2: Square negative elements and reverse them to make them sorted
        for (int i = 0; i < p; i++) { 
            a[i] = a[i] * a[i];
        }
        reverse(a.begin(), a.end());

        // Step 3: Square non-negative elements
        for (int j = 0; j < q; j++) {
            b[j] = b[j] * b[j];
        }

        // Step 4: Merge two sorted arrays (a and b) into res
        int i = 0, j = 0;
        while (i < p && j < q) {
            if (a[i] < b[j]) {
                res.push_back(a[i]);
                i++;
            } else {
                res.push_back(b[j]);
                j++;
            }
        }

        // Append remaining elements of a
        while (i < p) {
            res.push_back(a[i]);
            i++;
        }

        // Append remaining elements of b
        while (j < q) {
            res.push_back(b[j]);
            j++;
        }

        return res;
    }
};