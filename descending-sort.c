#include <stdbool.h>
#include <stdio.h>
struct s_integer_array
{
    int size;
    int array[5];
} ;

bool my_is_sort(struct s_integer_array s,  int n){
    
    // Array has one or no element or the 
    // rest are already checked and approved. 
    

    if (n == 1 || n == 0) {
        return 1; }
  
    // Unsorted pair found (Equal values allowed) 
    if (s.array[n - 1] > s.array[n - 2]) {
   
        return 0; 
    }
    // Last pair was sorted 
    // Keep on checking 
    printf("aaaaa\n");
    return my_is_sort(s, n-1); }
//     return(0);

