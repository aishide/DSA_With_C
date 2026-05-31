//KADANE'S ALGORITHM
//companies : Microsoft Facebook

//Question :
//https://leetcode.com/problems/maximum-subarray/description/


int maxSubArray(int* nums, int numsSize) {

    if (numsSize == 0) {
        return 0;
    }

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }

    return maxSum;
}