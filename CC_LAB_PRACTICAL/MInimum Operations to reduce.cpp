class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        int ans = -1;
        long sum = 0;
        for(int v: arr) sum+=v;
        if(sum < x) return -1;

        long k = sum - x;

        long s = 0;

        for(int i=0,j=0;j<arr.size();j++){
            s+=arr[j];
            while(s>k) s-=arr[i++];
            if(s==k) ans = max(ans,(j-i+1));
        }
        return ans==-1? -1 : (int)arr.size()-ans;
    }
};