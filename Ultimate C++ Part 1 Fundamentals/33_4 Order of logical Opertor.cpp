#include<bits/stdc++.h>
using namespace std;

int main()
{

  //  sequence :
    //()
    // !
    // &&
    // ||

    bool a = true;
    bool b= false;
    bool c= false;

    bool result = b && !a;

    cout<<boolalpha<< result<<endl;

    bool result2= a || b && c;
    cout<< result2 <<endl;


    return 0;
}
