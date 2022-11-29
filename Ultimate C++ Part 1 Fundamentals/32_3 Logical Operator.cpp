#include<bits/stdc++.h>
using namespace std;

int main(){

int age = 10;
int salary= 50000;
bool isEligible = age>18 && age < 65 && salary>30000;

cout<<boolalpha<<isEligible<<endl;

bool isEligible1 = age>18 || age < 65;

cout<<boolalpha<<isEligible1<<endl;

cout<<boolalpha<<!isEligible1<<endl;
return 0;
}
