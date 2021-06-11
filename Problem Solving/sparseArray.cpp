#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> strings(n);
    //vector of string type with size of n
    
    for(int i =0 ;i<n;i++)
    {
        string str;
        cin>>str;
        strings[i]=str;
    }
    int q;
    cin>>q;
    vector<string> queries(q);
    for(int i =0 ;i<q;i++)
    {
        string str;
        cin>>str;
        queries[i]=str;
    }
    
    for(int k =0 ; k<q;k++)
    {
        int count;
        for(int j =0 ;j<n ;j++)
        {
            if(queries[k].compare(strings[j])==0)
            {
                count++;
            }
            else
            {
                continue;
            }
            
            
        }
        cout<<count<<endl;
        count=0;
    }
    
   
    
    
    return 0;
}