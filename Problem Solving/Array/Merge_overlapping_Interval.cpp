// // This is a Brute Force approach.

// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> merge(vector<vector<int>>overlapped_arr )
// {
//     vector<vector<int>> final_arr;
//      int small = 0 ; 
//     int large= 0;
//     for(int i = 0 ; i<overlapped_arr.size();i++)
//     {
//         for(int j = i+1 ;j<overlapped_arr.size();j++)
//         {
//             if(overlapped_arr[j][0] >= overlapped_arr[i][0] || overlapped_arr[j][1]<=overlapped_arr[i][1] )
//             {
//                  small = overlapped_arr[i][0]<overlapped_arr[j][0]?overlapped_arr[i][0] : overlapped_arr[j][0];
//                  large =  overlapped_arr[i][1]>overlapped_arr[j][1]?overlapped_arr[i][1] : overlapped_arr[j][1];
//             }
//         }
//         final_arr.push_back({small,large});
//     }
//     return final_arr;
// }

// void Print_vector(vector<vector<int>> arr)
// {
//     for(int i = 0 ; i<arr.size();i++)
//     {
//         for(int j = 0 ; j<arr[i].size();j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     // Considering a Non sorted array at first;
//     vector<vector<int>> given_arr = {{1,3},{8,10},{2,6},{9,9},{15,18}};
//     // converting the unsorted 2d vector into sorted one using the Inbuil sort funciton of the stl library;
//     sort(given_arr.begin(),given_arr.end()); // this will take around O(nlogn) time for sorting.

//     vector<vector<int>> res_arr = merge(given_arr);
//     // Function used to prin the 2d vector;
//     Print_vector(given_arr);
//     cout<<"--------------------"<<endl;
//     Print_vector(res_arr);

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int input1 =7 ,input2 = 6;
    int input3[input2][2] = {{1,2},{1,3},{3,6},{2,4},{2,5},{5,7}};


    int input4 = 4,input5=6;

    


    return 0;
}