//Wap to print second largest,smallest and largest element in an array//
#include <stdio.h>

int main() 
{
    // Initialize an array with 10 numbers (already sorted 1-10 in this case)
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Outer loop: picks one element at a time (the "target")
    for(int i = 0; i < 10; i++)
    {
        // Inner loop: compares the target with every other element in the array
        for(int j = 0; j < 10; j++)
        {
            // If the target is smaller than the current element, swap them
            // This logic eventually sorts the array in DESCENDING order (10, 9, 8...)
            if(a[i] < a[j])
            {
                // Classic swap using a temporary variable
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // After the loops, the array is sorted as: {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
    // a[8] is the 9th element (value 2)
    // a[9] is the 10th element (value 1)
    // a[1] is the 2nd element (value 9)
    printf("%d %d %d", a[8], a[9], a[1]);        

    return 0;
}
