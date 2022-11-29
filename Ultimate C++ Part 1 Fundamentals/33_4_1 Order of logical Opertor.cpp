 /*" A job applicant should be a US citizen and either have a
 bachelor degree or at least tow year of work experience. "
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

bool isCitizen = true;
bool hasBachelorDegree = false;

short yearsOfExperience = 3;


bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExperience>=2);

cout<<boolalpha<<isEligible<<endl;

return 0;
}
