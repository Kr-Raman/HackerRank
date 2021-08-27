#include<bits/stdc++.h>
using namespace std;

//Brute force Approach doing things in O(n) with no extra space required;
//this brute force approach follows the partitioning algorithm of Quicksort.
 void rearrange(int arr[],int n)
 {
     int j = -1;

     for(int i = 0 ; i< n  ; i++)
     {
         if(arr[i]<0)
         {
             j++;
             swap(arr[i],arr[j]);
         }
         else
         {
             continue;
         }
         
     } 
 }

 // another Approach is there which is using TWO POINTERS which does the job in O(n) and constant space.
  void rearrange_Two_pointers(int arr[],int n)
  {
      int left = 0;
      int right = n-1;

      while(left<=right)
      {
          if(arr[left]<0)
          {
              left++;
          }
          else if(arr[left]>0 && arr[right]<0)
          {
              swap(arr[left],arr[right]);
              left++;
              right--;
          }
          else if(arr[left]>0 && arr[right]>0)
          {
              right--;
          }
          else if(arr[left]<0 && arr[right]<0)
          {
              left++;
          }
          
      }
  }

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = { -1, -2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // rearrange(arr, n);
    rearrange_Two_pointers(arr,n);
    printArray(arr, n);
    return 0;
}