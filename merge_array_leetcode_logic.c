/* You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109
 
*/
//AISHI DE


num1 = [1,2,3,0,0,0]
            i      idx
num2 = [2,5,6]
            j

m+n pe idx pointer diya 

if 6 >= 3 is true then replace 6 with 0 and decrement j and idx

5 >= 3 is true replace 5 with 0 where idx is pointing and decrement j and idx

2 >= 3 is false replace 3 with 0 where idx is pointing and decrement i and idx

here we are overwriting the elements on 0 

2 >= 2 is true replace 3 with 2 where idx is pointing and decrement j and idx

j-- is exit condition and we are done with the merge





num1 = [4, 5, 6, 0, 0, 0]
              i      idx
num2 = [1, 2, 3]
              j





 Complexity
Complexity	  Value
Time	      O(m+n)
Space	      O(1)




/* second while lopp for this condition : 
nums1 = [4,5,6,0,0,0]
nums2 = [1,2,3]

After comparisons:
[4,5,6,4,5,6]

So we must copy them:
[1,2,3,4,5,6]
That's why we only need:
while (j >= 0)
*/


/* 

If j == -1
All elements of nums2 have already been placed.
Nothing left to do.

If i == -1
Some elements of nums2 are still not placed.
We must copy them.

*/

//WHY NOT SORTING

Copy all elements of nums2 into the empty spaces of nums1.

nums1 = [1,2,3,2,5,6]
Then sort the whole array.
Works, but sorting takes:

O((m+n) log(m+n))

We can do better.


// Question Link : https://leetcode.com/problems/merge-sorted-array/description/
//Merge 2 sorted array without xtra space
//Companies : Amdocs Brocade Goldman Sachs Juniper Networks Linkedin Microsoft Quikr Snapdeal Synopsys Zoho Adobe
