#include<bits/stdc++.h>
using namespace std;

//Below these two are ---------------------------> Brute approaches taking O(nlogn) time.
void kthSmallest(int arr[],int low , int high , int k)
{
    sort(arr,arr+high+1); // this will take around O(nlogn) time

    cout<<arr[k-1];
    
}
void kthLargest(int arr[],int low , int high , int k)
{
    sort(arr,arr+high+1); // this will take around O(nlogn) time

    cout<<arr[high+1-k];
    
}


// This is the better One taking  only O(logn) time using the SET in stl  
// we are only using SET because it is given in the question that the elements given in the array are distinct 

void kthsmallest_better (int arr[], int low,int high,int k)
{
    set<int> s(arr ,arr+high+1); // set can be initialised using this syntax;
                                // Set makes the array in the asc order by itself
                                // there is no need to sort it.
    set<int>::iterator itr = s.begin();

   advance(itr,k-1); //advance here will advance the itr to a element which is  k-1     distance ahead
   cout<<*itr<<endl;
    

}


int main()
{
    int arr[] = {7,10,4,2,20,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

     kthSmallest(arr , 0 , size -1 , k);
     kthLargest(arr , 0 , size -1 , k);
     kthsmallest_better(arr , 0 , size -1 , k);


    return 0;
}