class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxL[n], maxR[n];

        // initializing maxL
        int i=0, m=0;
        for(i=0; i<n; i++){
            maxL[i]=m;
            if(height[i]>m)
                m=height[i];
        }

        // initializing maxR
        m=0;
        for(i=n-1; i>=0; i--){
            maxR[i]=m;
            if(height[i]>m)
                m=height[i];
        }

        int temp = 0, res = 0;
        for(i=0; i<n; i++){
            temp = min(maxL[i], maxR[i])-height[i];
            if(temp>0)
                res+=temp;
        }

        return res;
    }
};