#include<iostream>
#include<set>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int arr[]={2,4,6,8,10};

    set<int> s1({1,3,5,7,9});

    vector<int> v1(10);

    merge(arr,arr+5,s1.begin(),s1.end(),v1.begin());

    for(auto x: v1){
        cout<<x<<endl;
    }
}