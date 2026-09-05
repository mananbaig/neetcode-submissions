class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int top = m-1;
        int bottom = n-1;
        int s = m+n-1;
        while(top>=0 && bottom >=0)
        {
            if(nums1[top] > nums2[bottom])
            {
                nums1[s] = nums1[top];
                s--;
                top--;
            }
            else 
            {
                nums1[s] = nums2[bottom];
                s--;
                bottom--;
            }
        }
        while(bottom >= 0)
        {
            nums1[s] = nums2[bottom];
            s--;
            bottom--;
        }



    }






};