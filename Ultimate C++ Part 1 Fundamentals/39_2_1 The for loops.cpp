//factorial number

#include<bits/stdc++.h>
using namespace std;

int main(){


cout<< "Enter a positive number : "<<endl;

int number;
cin>>number;

if(number<0){

    cout<<"Error ! Number is not positive. "<<endl;
}

else{

    int factorial = 1;

    for(int i= 1; i<=number; i++){

        factorial*=i;
    }

    cout<< "The factorial of "<<number<<": "<<factorial<<endl;
}




return 0;
}
