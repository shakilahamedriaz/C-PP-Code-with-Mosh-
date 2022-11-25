#include<bits/stdc++.h>
using namespace std;

int main(){


double sales = 95000;
cout<< "Sales : $"<<sales<<endl;


const double stateTaxRate = .04;
double stateTax =  sales * stateTaxRate;
cout<< "State tax : $"<<stateTax<<endl;


const double countyTaxRate = .02;
double countyTax =  sales * countyTaxRate;
cout<< "county Tax: $"<<countyTax<<endl;


double totalTax = stateTax + countyTax;
cout<< "Total tax : $"<<totalTax<<endl;

double totalIncome= sales-totalTax;
cout<<"Total income after paying tax: "<<totalIncome<<endl;


return 0;
}
