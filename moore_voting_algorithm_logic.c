MOORE'S VOTING ALGORITHM

/*
The problem is:
Find the element that appears more than n/2 times in the array.
*/

[2 2 1 1 1 2 2]

majority = 2
votes = 1

majority = 2
votes = 1/  2

majority = 2
votes = 1/  2/ 1

majority = 2/ 1
votes = 1/  2/  1/  0

majority = 2/ 1
votes = 1/  2/  1/  0/ 1 

majority = 2/ 1/ 2 
votes = 1/  2/  1/  0/  1/  0

majority = 2/ 1/ 2 
votes = 1/  2/  1/  0/  1/  0/  1


MAJORITY ELEMENT = 2



/* Hash table me space complexity is HIGH */
// [2 , 2, 1, 1, 1, 2, 2]
/* 
num      frequency 
2             4
1             3
*/


SO BEST APPROACH IS MOORE'S VOTING ALGORITHM

-> ARRAYS	1	Majority Element	https://leetcode.com/problems/majority-element/description	Easy	Amazon Google





EXAMPLE  :
[2,2,1,1,1,2,2]

Element      Action                            Candidate    Vote/count
2           count =0 , choose = 2                  2            1
2           same                                   2            2
1           different, cancel 1 vote of 2          2            1
1           same                                   2            0
1           different, choose 1 as candidate       1            1
2           different, cancel 1 vote of 1          1            0
2           count = 0, choose 2 as candidate       2            1



/* 
Time: O(n)
Space: O(1)
*/
