class Solution {
    maxSubarraySum(arr, k) {
        // code here
        let low = 0;
        let high = k-1;
        let sum = 0;
        for(let i = low;i<=high;i++){
            sum += arr[i];
        }
        let res = 0;
        while(high<=arr.length - 1){
            res = Math.max(res,sum);
            low++;
            high++;
            sum = sum - arr[low-1];
            sum = sum + arr[high]
        }
        return res;
    }
}
