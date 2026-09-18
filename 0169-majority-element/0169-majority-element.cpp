class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        // for(int i =0;i<n;i++){
        //     int count= 0;
        //     for(int j= 0;j<n;j++){
        //         if(nums[j]==nums[i]){
        //             count++;
        //         }
        //         if(count>n/2){
        //             return nums[j];
        //         }

        //     }
        // }
        // return 0;
        int freq = 0;//moores voting algo
        int ans = 0;
        for(int i =0;i<n;i++){
            if(freq==0){
                ans = nums[i];
                freq =1;
            }else if( ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
  return ans;
    }
};