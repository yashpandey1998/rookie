#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    stringstream ss(str);
    vector<int> v;
    int temp;
    while(ss>>temp)
    {
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }

    return 0;
}
