class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        int thirdLargest = INT_MIN;

        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int x : nums) {

            // Update three largest
            if (x >= largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = x;
            }
            else if (x >= secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = x;
            }
            else if (x > thirdLargest) {
                thirdLargest = x;
            }

            // Update two smallest
            if (x <= smallest) {
                secondSmallest = smallest;
                smallest = x;
            }
            else if (x <= secondSmallest) {
                secondSmallest = x;
            }
        }

        return max(largest * secondLargest * thirdLargest,
                   largest * smallest * secondSmallest);
    }
};