#include<bits/stdc++.h>
using namespace std;
//this is the brute force approach
//Question wants us to sort this array of 0,1,2 without using Sorting algorithm and without using extra space;

void sort_brute(int arr[],int N)
{
    int count1 = 0;
    int count0 = 0;
    int count2 = 0;

    for(int  i = 0 ; i <  N ;i ++)
    {
        if(arr[i] == 0)
        {
            count0++;
        }
        else if(arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        
    }
 
    for(int j = 0 ; j < N ; j++)
    {
        if(count0>0)
        {
            arr[j]=0;
            count0--;
            continue;
        }
        else if(count1 > 0)
        {
            arr[j] =1;
            count1--;
            continue;
        }
         else       
        {
            arr[j]=2;
            count2--;
        }

    }
 
 for(int k =0 ; k < N ; k++)
 {
     cout<<arr[k]<<" ";
 }
}
//this is the optimal approach which have a complexity of O(n) and does the job in Just single pass.
//and here we are taking NO EXTRA space 
void sort_optimal_Dutch_national_flag(int arr[] , int N)
{
    int low=0,mid=0;
    int high = N-1;

    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0 : {swap(arr[mid],arr[low]); // swap is  a in buit function in STL
                        low++;
                        mid++;
                        break;};
            case 1 : {
                        mid++;
                        break;
            }            
            case 2 : {
                        swap(arr[mid],arr[high]);
                        high--;
                        break;
            }            
        }
    }
    for(int i = 0 ; i < N ; i++)
    {
        cout<<arr[i]<<" ";
    }

}

 

int main()
{
    int N = 5;
    int arr[]= {0 ,2 ,1, 2, 0};

    // sort_optimal_Dutch_national_flag(arr , N);

    sort_brute(arr,N);
    
    return 0;
}