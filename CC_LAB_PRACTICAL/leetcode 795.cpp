class Solution {
public:

    int inrange(vector<int> &arr,int range){
        int ans = 0;
        int combsize = 0;
        for(int v: arr){
            if(v<=range) combsize++;
            else combsize = 0;

            ans+=combsize;

        }
        return ans;
    }

    int numSubarrayBoundedMax(vector<int>& arr, int left, int right) {
        return inrange(arr,right) - inrange(arr,left-1);
    }
};