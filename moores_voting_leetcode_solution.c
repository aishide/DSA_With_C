//AISHI DE

int majorityElement(int* nums, int numsSize) {
    int i, candidate = 0, votes = 0;
    for (i = 0; i < numsSize; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        }
        else {
            if (nums[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > numsSize / 2)
        return candidate;
    return -1;
}

/* Question : 
https://leetcode.com/problems/majority-element/description/
Companies: 
Amazon Google
*/

