#include<bits/stdc++.h>
using namespace std;

//------------------------> Brute FORCE APPROACH
void rvereseArray_brute (int arr[] , int start_i , int size)
{
    int temp [ size+1]; //space complexity ---> +n
     for(int i = 0 ; i < size+1 ;i++)
     {
         temp[i] = arr[i];  // n times
     }
                                        //Over all complexity is O(2n);
     int count = size ;
    for(int j = 0 ; j <= size ; j++)
    {
        arr[j] = temp[count--]; // n times 
    }

}

// ------------------------> swaping first and last element using While loop
void rvereseArray_better(int arr[],int start, int last)
{
    while(start<last)
    {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;

    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
 
    printArray(arr, n);
     
    // Function calling
    
    // rvereseArray_brute(arr, 0, n-1);
     rvereseArray_better(arr,0,n-1);
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}