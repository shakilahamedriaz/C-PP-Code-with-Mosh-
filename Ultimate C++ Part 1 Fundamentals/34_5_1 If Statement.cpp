#include<bits/stdc++.h>
using namespace std;
int main(){

int sales = 11000;
double commision;

if (sales <= 10000) commision = .1;
else if(sales<=15000) commision = .15;

else commision = .2;

cout<< commision<<endl;



return 0;
}
