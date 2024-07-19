class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int,int>cnt;
       int maxFreq = n/2;
       for(int i=0;i<n;i++){
        cnt[nums[i]]++;
        if(cnt[nums[i]]>maxFreq)
         return nums[i];
       }
      return -1;
    }
};
