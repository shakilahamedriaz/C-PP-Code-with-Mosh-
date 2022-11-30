#include<bits/stdc++.h>
using namespace std;

int main()
{


    int first,second;
    cin>>first>>second;

    int result;
    if(first>second)
        result = first;

        else
            result = second;

    cout<<"Greater value is : "<<result<<endl;
    return 0;


    int result1 = (first > second) ? first : second;
}
