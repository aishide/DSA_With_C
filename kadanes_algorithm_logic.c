KADANE'S ALGORITHM

[ -2,1,-3,4,-1,2,1,-5,4]


index      Element      current_sum =max(element, current_sum + element)     max_sum 
0           -2           max(-2, -2) = -2                                        -2
1           1            max(1, -2 + 1) = 1                                       1
2           -3           max(-3, 1 + -3) = -2                                     1
3           4            max(4, -2 + 4) = 4                                       4
4           -1           max(-1, 4 + -1) = 3                                      4
5           2            max(2, 3 + 2) = 5                                        5
6           1            max(1, 5 + 1) = 6                                        6
7           -5           max(-5, 6 + -5) = 1                                      6
8           4            max(4, 1 + 4) = 5                                        6





so when small+ve + big+ve = +ve
when small-ve + big+ve = big+ve
when small+ve + big-ve = small+ve
so Kadane's algorithm is based on the idea that if the current sum becomes negative, we can reset it to zero because a negative sum would not contribute to a maximum sum in the future.
it avoids adding negative sums to the current sum, which helps in finding the maximum subarray sum efficiently.

when currentsum < 0 then currentsum = 0





Subarray is a continuous part of an array.

total number of subarrays in an array of size n = n*(n+1)/2

so loop : 
Print subarray code : 
int sum = 0; 
    
    for(int start = 0 ; start < size ; start++){
        for (int end = start; end <size; end ++) { 
            for (int i = start ; i <= end; i++) {
                printf("%d", arr[i]);
                sum += arr[i];
            }
            printf("   ");
        }
        printf("\n");
    }
    printf("\nThe maximum subarray sum is  : %d\n", sum);
}

here time complexity is O(n^3) and space complexity is O(1)





NOW REDUCING TIME COMPLEXITY TO O(n^2)

int sum = 0; 
int maxsum;
    for(int start = 0 ; start < size ; start++){
        sum = 0; // reset sum for each new starting point
        for (int end = start; end <size; end ++) { 
            sum += arr[end]; // add the current end element to the sum
            printf("%d   ", sum); // print the current subarray sum
            maxum = max(maxsum, sum); // update maxsum if the current sum is greater
        }
        printf("\n");
    }
    printf("\nThe maximum subarray sum is  : %d\n", sum);
}




using Kadane's algorithm to reduce time complexity to O(n)


Kadane's algorithm is also known as dynamic programming (DP) approach. 
that is we can break down the problem into smaller subproblems and solve them efficiently by storing the results of previously solved subproblems.



Cases which are differnet from the normal cases are called edge cases or corner cases.
[-1, -2, -3, -4]  // all negative numbers
[1, 2, 3, 4]     // all positive numbers
[0, 0, 0, 0]     // all zeroes
[1]              // single element array
[]               // empty array

