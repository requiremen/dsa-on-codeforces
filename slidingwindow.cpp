class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int  n = arr.size();
        int sum = 0;
        int high = k-1;
        int low = 0;
        for(int i = low;i<=high;i++){
            sum += arr[i];
        }
        int res = sum;
        while(high< n-1){
            low++;
            high++;
            sum = sum - arr[low-1];
            sum = sum + arr[high];
            
             res = max(res,sum);
        }
        return res;
        
    }
    
};
