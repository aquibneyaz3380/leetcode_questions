#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        int slargest = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(nums[i] > largest) {
                slargest = largest; 
                largest = nums[i];  
            }
            else if(nums[i] > slargest) {
                slargest = nums[i]; 
        }
        }
         return (largest-1) * (slargest-1);
    }
};
