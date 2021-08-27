#include<bits/stdc++.h>
using namespace std;
void merge(int arr[] , int low ,int mid , int high)
{
    //   for(int i  = low ; i< mid ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int n1 = mid - low +1 ;
    int n2 = high -  mid ; 
    
    int L[n1] , R[n2] ; 

    for(int i  = 0 ; i < n1 ; i++)
    {
        L[i]  = arr[low+ i ];
        
    }
    for(int j  = 0 ; j < n2 ; j++)
    {
        R[j]  = arr[mid+1 +j];

    }
    int  i , j , k;
    i = 0 ; 
     j = 0 ;
     k = low;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;

    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++; 

    }

}
void merge_sort(int arr[],int low , int high)
{
//       for(int i  = 0 ; i<= high ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    if(low>high)
        return;
    
    if(low<high)
    {
       int  mid = low+(high-low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
      

    }

    
}

int main()
{
    int arr[]={15,5,24,8,1,3,16,10,20};
    int n  = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,0,n-1);
    for(int i  = 0 ; i< n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// // Merge two subarrays L and M into arr
// void merge(int arr[], int p, int q, int r) {
  
//   // Create L ← A[p..q] and M ← A[q+1..r]
//   int n1 = q - p + 1;
//   int n2 = r - q;

//   int L[n1], M[n2];

//   for (int i = 0; i < n1; i++)
//     L[i] = arr[p + i];
//   for (int j = 0; j < n2; j++)
//     M[j] = arr[q + 1 + j];

//   // Maintain current index of sub-arrays and main array
//   int i, j, k;
//   i = 0;
//   j = 0;
//   k = p;

//   // Until we reach either end of either L or M, pick larger among
//   // elements L and M and place them in the correct position at A[p..r]
//   while (i < n1 && j < n2) {
//     if (L[i] <= M[j]) {
//       arr[k] = L[i];
//       i++;
//     } else {
//       arr[k] = M[j];
//       j++;
//     }
//     k++;
//   }

//   // When we run out of elements in either L or M,
//   // pick up the remaining elements and put in A[p..r]
//   while (i < n1) {
//     arr[k] = L[i];
//     i++;
//     k++;
//   }

//   while (j < n2) {
//     arr[k] = M[j];
//     j++;
//     k++;
//   }
// }

// // Divide the array into two subarrays, sort them and merge them
// void mergeSort(int arr[], int l, int r) {
//   if (l < r) {
//     // m is the point where the array is divided into two subarrays
//     int m = l + (r - l) / 2;

//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);

//     // Merge the sorted subarrays
//     merge(arr, l, m, r);
//   }
// }

// // Print the array
// void printArray(int arr[], int size) {
//   for (int i = 0; i < size; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }

// // Driver program
// int main() {
//   int arr[] = {6, 5, 12, 10, 9, 1};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   mergeSort(arr, 0, size - 1);

//   cout << "Sorted array: \n";
//   printArray(arr, size);
//   return 0;
// }