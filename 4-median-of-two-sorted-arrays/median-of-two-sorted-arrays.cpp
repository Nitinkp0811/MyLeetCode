class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;

        mergedArray.insert(mergedArray.end(), nums1.begin(), nums1.end());
        mergedArray.insert(mergedArray.end(), nums2.begin(), nums2.end());

        sort(mergedArray.begin(), mergedArray.end());

        int n = mergedArray.size();

        if(n % 2 == 0) {
            return (mergedArray[n / 2] + mergedArray[(n / 2) - 1]) / 2.0;
        } else {
            return (mergedArray[n / 2]);
        }
    }
};