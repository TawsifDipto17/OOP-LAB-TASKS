#include<iostream>

using namespace std;

namespace lab{
    int a=3500;        
}

namespace cse{
    int a=4000;
}

int main()
{
    int a=5000;
    
    cout<<"From main "<<a<<endl;
    cout<<"From lab namespace "<<lab::a<<endl;
    cout<<"From cse namespace "<<cse::a<<endl;
   
}