#include<bits/stdc++.h>
using namespace std;

int main(){

int sales=11000;
double commission ;


if(sales>10000){

    commission = .1;
    cout<<commission<<endl;
}
else
    commission = .05;
    cout<< commission<<endl;

double commission1 = (sales > 11000) ? .1 : .05;
cout<< commission1<<endl;


return 0;
}
