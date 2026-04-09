#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x,y;
    cout<<"Enter the value at X cordinate : ";
    cin>>x;
    cout<<"Enter the value at Y cordinate : ";
    cin>>y;
    double Dis=sqrt(x*x + y*y);
    cout<<"Distance from Origin is : "<<Dis;
}
