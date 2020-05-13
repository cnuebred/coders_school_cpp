#include <iostream>

using namespace std;

int* merge(int arr_left[],int sz_left, int arr_right[], int sz_right){
    /* declaring an array using dynamic allocation of memory.
     Merged the given two arrays into this third Array */
    int* arr_merged = new int [sz_left+sz_right];
    // Add your code below this line. Do not modify any other code.
    int i = 0, j = 0, k = 0;
    
    while(j < sz_left && k < sz_right) {
        if (arr_left[j] < arr_right[k]) arr_merged[i++]=arr_left[j++];
        else  arr_merged[i++] = arr_right[k++];
    }
    if (j == sz_left){
        while(k < sz_right)
            arr_merged[i++] = arr_right[k++];
    }
    else{
        while(j < sz_left)
            arr_merged[i++] = arr_left[j++];
    }
    // Add your code above this line. Do not modify any other code.
    /* return the merged array */
    return arr_merged;
}