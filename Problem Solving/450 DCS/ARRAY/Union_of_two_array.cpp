#include<bits/stdc++.h>
using namespace std;

//this approach uses the Power of SET DATASTRUCTURES 
//SET DS only allows distinct element in it 
// this method time complexity is O(n*lon(n) + m*log(m)) 
// as the loop with run for n time and it requires to search for appropriate location for the current element therefore require log(n) for that case
// similarly for the second array
void getUnion(int a[],int n,int b[],int m)
{
    set<int>s;

    for(int i = 0 ; i< n ;i++)
    {
        s.insert(a[i]);
    }
    for(int i = 0 ; i< m ;i++)
    {
        s.insert(b[i]);
    }
   
    for(auto itr = s.begin(); itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }

        cout<<s.size()<<endl;

}

//This approach is somewhat optimised 
// method has time complexity O(m+n).
void getUnion_usingMAP(int a[], int n , int b[] , int m )
{
    map<int,int>mp;

    for(int i = 0 ; i < n ; i++)
    {
        mp.insert({a[i],i});
    }
    for(int i = 0 ; i < m ; i++)
    {
        mp.insert({b[i],i});
    }

    for(auto itr = mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" ";
    }
}

int main()
{
    int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };
 
    //getUnion_usingSET(a, 9, b, 10);
    getUnion_usingMAP(a, 9, b, 10);

}