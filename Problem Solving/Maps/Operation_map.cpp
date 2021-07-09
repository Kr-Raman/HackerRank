#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int> mymap;
    mymap['c'] = 100;
    mymap['b'] = 200;
    mymap['a'] = 300;

    map<char,int>::iterator it;

    for(it = mymap.begin();it!=mymap.end();++it)
    {
        cout<<it->first<<" "<< it->second<<endl;
    }
    return 0;
}