#include<bits/stdc++.h>

using namespace std;
void swap (int* a,int* b)
{
    int temp = 0 ;
    temp = *a;
    *a=*b;
    *b=temp;
    
}
void merge (vector<int>first , vector<int>sec)
{
    for(int i = 0 ; i<first.size();i++)
    {
        if(first[i]>sec.front())
        {
            swap(&first[i],&sec.front());
            
        }
        else
        {
            continue;
        }

        for(int k = 1 ; k<sec.size();k++)
        {
            if(sec[k-1]>sec[k])
            {
                swap(&sec[k-1],&sec[k]);
            }

        }
        
    }

    //PRINTING THE SORTED ARRAYS

    for(int i  = 0 ; i <first.size();i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;
    for(int i  = 0 ; i <sec.size();i++)
    {
        cout<<sec[i]<<" ";
    }
    
}
void print(vector<int>first, vector<int>sec)
{
    cout<<"Array Given : "<<endl;
    for(int i  = 0 ; i <first.size();i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;
    for(int i  = 0 ; i <sec.size();i++)
    {
        cout<<sec[i]<<" ";
    }
}

int main()
{
    vector<int> a1={1,4,7,8,10};
    vector<int>a2={2,3,9};
    merge(a1,a2);
    //this print will only print the array that were given to us
    print(a1,a2);
    
    return 0;
}