#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
   int **ptr= new int*[n];
    int k;
    int i,j;
   for ( i=0 ;i<=n-1;i++)
   {
      
       cin>>k;
        ptr[i]=new int[k];
       for( j=0;j<=k-1;j++)
       {
          cin>>ptr[i][j];
       }
      
   }
   for (int o=0 ;o<=q-1;o++)
   {    cin>>i>>j;
        cout<<ptr[i][j];
      
   }
   
    
    
    return 0;
}
