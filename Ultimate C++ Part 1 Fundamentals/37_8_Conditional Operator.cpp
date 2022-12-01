#include<bits/stdc++.h>
using namespace std;
int main(){

cout<< "Enter first numbers : ";
int first;
cin>>first;
cout<< "Enter second number : ";
int second;
cin>>second;

cout<< "Enter operator :";

char op;
cin>>op;

  switch (op){

case '+':

    cout<<first+second;
    break;

case '-':
    cout<<first-second;
    break;

case '*':
    cout<<first*second;
    break;
case '/':
    cout<<first/second;
    break;

default :
    cout<< "Invalid operator!";



  }






return 0;
}
