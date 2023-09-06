class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //create a new vector to hold the output
        vector<int> output;
        //get size of the vector nums
        int vec_size = nums.size();
        //for loop to iterate through the vector
        for(int i = 0; i < vec_size; i++){
            for (int k = i+1; k < vec_size; k++){
                if (nums[i] + nums[k] == target){
                output.push_back(i);
                output.push_back(k);
                break;
                }
            }
        }
        return output;
    }
};