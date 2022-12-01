#include<bits/stdc++.h>
using namespace std;
int main(){

int temp[]= { 10, 10, 10, 10};

double sum=0;

for(int temperature: temp)

    sum+=temperature;
    short cnt = sizeof(temp)/sizeof(int);

    double average = sum/cnt;
cout<<average<<endl;

return 0;
}
