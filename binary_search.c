// time complexity -> O(n) = linear search 
//this is the disadvantage of linear search that it is not efficient for large data sets.

//BINARY SEARCH 

// to overcome this we use binary search which is more efficient for large data sets but it requires the data to be sorted.
// binary search is 50% more efficient than linear search because it eliminates half of the remaining elements in each step.

/*
1. in binary search the elements must be sorted in ascending or descending order before performing the search operation.
2. Find Mid value of the array.
   mid = low+ (high - Low) / 2
here high and low are the index number so low is 0 and....
if 4.5 then 4 th element 
3. then compare the mid value with the target value if they are equal then return the mid index number.
if the mid value is less than the target value then we can ignore the left half of the array and continue searching in the right half of the array.
if the mid value is greater than the target value then we can ignore the right half of the
array and continue searching in the left half of the array.
4. then if right then high is 9 if arr[10] and low is mid+1
5. then iska mid 
*/

// if success at once then O(1) -> best case 
//if divide then the time complexity is always log 

#include <stdio.h>
int main() {

    //Binary Search 
    //AISHI DE

    int target = 7;

    int arr[7] = {1, 3, 5, 6, 7, 8, 9};
    printf("Your array is : \n");

    for (int i = 0; i < 7 ; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    int size = sizeof(arr)/sizeof(arr[0]);

    int found = 0;
    int low = 0;
    int high = size-1;

   
    int mid;

    while ( low <= high ) {

        mid = low + (high - low) / 2;

        if (arr[mid] == target){
            found =1;
            break;
        }
        else if (arr[mid] > target) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    if (found == 1) { 
        printf("The target element %d is found at index %d !", target , mid );
    }
    else{
        printf("Element %d not found ", target);
    }
    return 0;
}