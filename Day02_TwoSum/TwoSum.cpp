/* THERE ARE MORE OPTIMAL SOLUTIONS TO THIS PROBLEM. THE BETTER ONES USES HASH TABLES. */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>
            indexes; // Declares the vector to receive the resultant indexes

        // Dual loop to run through nums and compare each element
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++) {

                // Checks is sum of elements is equal target value
                if (nums[i] + nums[j] == target) {

                    // If so, insert elements into 'indexes' and returns it
                    indexes.push_back(i);
                    indexes.push_back(j);
                    return indexes; // There is no need to continue if there is only one solution.
                }
            }

        return {};
    }
};
