//AISHI DE 

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int idx = nums1Size - 1;
    int i = m - 1;
    int j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] <= nums2[j])
        {
            nums1[idx] = nums2[j];
            idx--;
            j--;
        }
        else
        {
            nums1[idx] = nums1[i];
            idx--;
            i--;
        }
    }

    // Copy remaining elements of nums2
    while (j >= 0)
    {
        nums1[idx] = nums2[j];
        idx--;
        j--;
    }
}
