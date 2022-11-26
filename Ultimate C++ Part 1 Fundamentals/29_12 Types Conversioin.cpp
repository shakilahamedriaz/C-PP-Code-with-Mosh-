#include<bits/stdc++.h>
using namespace std;

int main(){

int a=1;
double b =2.2;

double c= a + b;

double z= a+(int)b;



cout<<c<<endl;
cout<<z<<endl;


int t=9;
int p= 5.4;

double k= t  +  static_cast<int>(p);

cout<<k<<endl;



int s=10;
int m=3;

double  n= static_cast<double>(s)/m;  //to get floating value.
                              // we can use (double) before variable.
cout<<n<<endl;


return 0;
}
