#include <iostream>

using namespace std;

int* merge(int arr_left[], int sz_left, int arr_right[], int sz_right){
    /* declaring an array using dynamic allocation of memory.
     Merged the given two arrays into this third Array */
    int* arr_merged = new int [sz_left+sz_right];
    // Add your code below this line. Do not modify any other code.
    int i = 0, j = 0, k = 0;
    
    while(j < sz_left && k < sz_right) {
        if (arr_left[j] < arr_right[k]) arr_merged[i++]=arr_left[j++];
        else  arr_merged[i++] = arr_right[k++];
        //cout << arr_merged[i] << " : tab ";
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
    cout<<endl;
    return arr_merged;
}

int main() {
    int arr_l[5] = {208, 4, 5, 2, 3};
    // cout << sizeof(arr_l)/sizeof(*arr_l) << endl;
    // cout << sizeof(arr_l) << " : " <<  arr_l<< endl;
    // cout << sizeof(*arr_l) << " : " << *arr_l<<endl;
    int arr_r[2] = {2, 9};
    // cout << sizeof(arr_r)/sizeof(*arr_r) << endl;
    int *x = merge(arr_l, 5, arr_r, 2);
    for(int i = 0; i < 7; i++){
        cout << x[i] << " - ";
    }
    return 0;
}