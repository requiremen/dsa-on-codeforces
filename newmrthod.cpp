class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        vector<int>newarr;
        int point1 = 0;
        int point2 = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<0){
                a.push_back(nums[i]*nums[i]);
            }else{
                b.push_back(nums[i]*nums[i]);
            }
        }
        reverse(a.begin(),a.end());

        while(point1<a.size() && point2<b.size()){
            if(a[point1]<b[point2]){
                newarr.push_back(a[point1]);
                point1++;
            }else{
                newarr.push_back(b[point2]);
                point2++;
            }

        }
        while(point1<a.size()){
            newarr.push_back(a[point1]);
            point1++;
        }
        while(point2<b.size()){
            newarr.push_back(b[point2]);
            point2++;
        }

        return newarr;
    }

    
};
