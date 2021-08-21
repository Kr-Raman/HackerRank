#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

//----------------------------> Brute Force approach
struct Pair getMinMax_brute(int arr[], int size)
{
     Pair temp;
     temp.max = arr[0];
     temp.min = arr[0];

     for(int i = 0 ;i < size ; i++)
     {
         if(arr[i]>temp.max)
         {
             temp.max = arr[i];         // for each Run there are two comparison
                                        // therrfore total comparison = n * 2
         }
         if(arr[i]<temp.min)
         {
             temp.min = arr[i];
         }
     }
     return temp;
}

struct Pair getMinMax_better(int arr[], int low, int high)
{
    Pair minmax , mml , mmr ;

    if(low == high) //mean there is only one element
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    
    if(high == low+1) //mean there are only two element in the array
    {
        // will do the comparison between the two element 
        if(arr[low]>arr[high])
        {
            minmax.min = arr[high];
            minmax.max = arr[low];

        }
        else
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        
        return minmax;
    }

    // now if there are more than two element then will apply the Divide and 
    //conqure method will divide the array into two and find the min and max from them and then will comapre the min and max from the two divided array and then will return the final min and max;

    int mid = (high + low) /2;
    mml = getMinMax_better(arr,low,mid);
    mmr = getMinMax_better(arr,mid+1,high);

    if(mml.min>mmr.min)
    {
        minmax.min = mmr.min;
    }
    else
    {
        minmax.min = mml.min;
    }
    
    if(mml.max>mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }
    
    return minmax;
}   

int main()
{
     int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    struct Pair minmax_brute = getMinMax_brute(arr, arr_size);
    struct Pair minmax_better = getMinMax_better(arr, 0,arr_size-1);
     
    cout << "Minimum element is "
         << minmax_better.min << endl;
    cout << "Maximum element is "
         << minmax_better.max;
          
    return 0;
   
}