#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int,list<int>> table;
    table[1].push_back(10);
    table[1].push_back(20);
    table[1].push_back(30);
    table[2].push_back(15);
    table[2].push_back(16);
    table[2].push_back(17);
    table[3].push_back(1);
    table[3].push_back(2);
    // list<int>::iterator j;
   
    for(int i = 1 ; i<4 ; i++)
    {   
        cout<<"Index"<< i << ":";
        for(int j :table[i])
        {
            cout<<j<<"=>";
        }
        cout<<endl;
    }

    return 0;
}
