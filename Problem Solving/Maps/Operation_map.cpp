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

    // Insertion Methods
    // Method 1 - Single Parameter
    map<int,int>mymap1;
    mymap1.insert(pair<int,int>(1,100));
    mymap1.insert(pair<int,int>(2,200));
    mymap1.insert(pair<int,int>(3,300));
    mymap1.insert(pair<int,int>(3,500));
    //Method 2 - With hint Position
    // map<int ,int>::iterator it = mymap1.begin();
    // mymap1.insert(it,pair<int,int>(4,400));
    // mymap1.insert (it,pair<int,int>(10,300)); 
    // Method 3 - Range Insertion
    map<int,int>anothermap;
    anothermap.insert(mymap1.begin(),mymap1.find(3));

    for (map<int,int>::iterator it1=mymap1.begin(); it1!=mymap1.end(); it1++)
    cout << it1->first << " => " << it1->second << '\n';
    for (map<int,int>::iterator it1=anothermap.begin(); it1!=anothermap.end(); it1++)
    cout << it1->first << " => " << it1->second << '\n';

    return 0;
}