class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int total = n + m;
        int mid1 = (total - 1) / 2;
        int mid2 = total / 2;
        int i = 0, j = 0;
        int count = 0;
        double val1 = 0, val2 = 0;

        while (count <= mid2) {
            int val;
            if (i < n && (j >= m || nums1[i] <= nums2[j])) {
                val = nums1[i++];
            } else {
                val = nums2[j++];
            }

            if (count == mid1) val1 = val;
            if (count == mid2) val2 = val;
            count++;
        }

        return (val1 + val2) / 2.0;
    }
};