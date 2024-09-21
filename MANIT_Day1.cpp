// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             int find=target-nums[i];
//             if(mp.count(find)){
//                 return {i,mp[find]};
//             }
//             mp[nums[i]]=i;
//         }
//         return {};
//     }
// };

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque<int>d;
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             int ele=nums[i];
//             while(!d.empty() && d.back()<nums[i]){
//                 d.pop_back();
//             }
//             d.push_back(i);
//             if(i>=k && nums[i-k]==d.front()) d.pop_front();
//             if(i>=k-1) ans.push_back(nums[d.front()]);

//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque<int>d;
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             if(i>=k && i-k==d.front()) d.pop_front();
//             while(!d.empty() && nums[d.back()]<nums[i]){
//                 d.pop_back();
//             }
//             d.push_back(i);
//             if(i>=k-1) ans.push_back(nums[d.front()]);
//             }

//         return ans;
//         }
// };

// Question 238
// Brute Force Solution
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> answer;
//         for(int i=0;i<nums.size();i++){
//             int p=1;
//             for(int j=0;j<nums.size();j++){
//                 if(i==j) continue;
//                 p*=nums[j];
//             }
//             answer.push_back(p);
//         }
//         return answer;
//     }
// };

// Best Approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};