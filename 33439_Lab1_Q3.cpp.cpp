#include<iostream>
#include<ctime>// random numbers generation
using namespace std;


int main(){
srand(time(0));
double num1 = (double) rand()/RAND_MAX;
double num2 =(double)rand()/RAND_MAX;
double num3 =(double)rand()/RAND_MAX;
double avg=(num1 + num2 + num3)/3;
cout<<"avg is :"<<avg;
cout<<endl<<"Min number is "<<min(num1,min(num2,num3));
cout<<endl<<"max num is "<<max(num1,max(num2,num3));
return 0;
}
