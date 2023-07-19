#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int a, b;
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> res; // Remove the square brackets
        for (i = 0; i < nums.size(); i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    a = i;
                    b = j;
                    res.push_back(a); // Store the indices in the result vector
                    res.push_back(b);
                    return res; // Return the result vector
                }
            }
        }
        
        // The lines below will not be reached if a pair is found
        // Consider what should be done if no pair is found
        
        // Return an empty vector to indicate no solution found
        return res;
    }
};

int main() {
    Solution heze;
    vector<int> nums = {2, 3, 4, 5};
    int target = 9;

    vector<int> result = heze.twoSum(nums, target);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
