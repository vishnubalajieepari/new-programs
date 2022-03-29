class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int c=0;
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0)
            {
                c++;
            }
            if(rem<0)
            {
                rem+=k;
            }
            if(mp.find(rem)!=mp.end())
            {
                c+=mp[rem];
            }
            mp[rem]++;
        }
        return c;
    }
};
