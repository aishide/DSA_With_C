int search(int* nums, int numsSize, int target) {

    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[low] <= nums[mid]) {   // left half sorted

            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {                          // right half sorted

            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }

    return -1;
}

//AISHI 

//Question : 
//https://leetcode.com/problems/search-in-rotated-sorted-array/

//Companies: 
//Microsoft Google Adobe Amazon D-E-Shaw Flipkart Hike Intuit MakeMyTrip Paytm 
