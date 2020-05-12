#include <iostream>
// Add any helper functions(if needed) above.
// int single_number(int arr[], int sz)
// {
//    map<int, int> hmp;  
//    map<int, int>::iterator it;
//    int number = 0;
//    for(int i=0; i<sz; i++) 
//    {   /*iterate through array and populate count for each array element */
//         it = hmp.find(arr[i]);
//         if(it != hmp.end())
//             it->second += 1;
//          else
//             hmp.insert(pair<int,int>(arr[i], 1));
//     }
//     for(int i=0; i<sz; i++) 
//     { /* iterate Hashtable and find one array element where count = 1; */
//         it = hmp.find(arr[i]);
//         if(it->second == 1)
//             return arr[i];
//     }
//     return 0;
// }