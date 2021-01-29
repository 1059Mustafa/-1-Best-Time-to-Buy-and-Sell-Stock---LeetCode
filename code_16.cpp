class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
        int n=arr.size();
        int profit=0;
        int buy=arr[0];
        for(int i=1;i<n;i++)
        {
            if(buy>arr[i])
            {
                buy=arr[i];
            }
            else
            {
                profit=max(profit,arr[i]-buy);
            }
        }
        return profit;
        
    }
};
