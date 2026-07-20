class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a=m;
    int b=0;
     while(a<(m+n)){
           nums1[a]=nums2[b];
           a++;
           b++;
     }
     sort(nums1.begin(), nums1.end());
    }
};