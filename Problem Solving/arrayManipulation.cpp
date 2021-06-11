#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n , m ;
    cin>>n>>m;
    long long zero[n]={0};
    vector<long long> query[m];
    
    for(int i =0 ; i<m ;i++)
    {
        int a , b ,k;
        cin>>a>>b>>k;
        query[i].push_back(a);
        query[i].push_back(b);
        query[i].push_back(k);
        
    }
    for(int j = 0 ; j<m ;j++)
    {
        for(int k = query[j].at(0)-1;k<=query[j].at(1)-1;k++)
        {
            zero[k]= zero[k]+query[j].at(2);
        }
    }
    //This is used to check whether the input is stored properly inside the arraylist or not
    // for(int j = 0 ; j<m ;j++)
    // {
    //     for(int k = 0;k<3;k++)
    //     {
    //        cout<< query[j].at(k)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //This is to print the content of the array after the completion of all the operation
    // for(int z =0 ; z<n;z++)
    // {
    //     cout<<zero[z]<<" ";
    // }
    int final_max = -1000;
    int curr_max=-1000 ;
    for(int i = 0 ; i<n ;i++)
    {
         curr_max = zero[i];
        final_max = max(curr_max , final_max);
    }
    cout<<final_max;
    return 0;
}
// 7542539201
