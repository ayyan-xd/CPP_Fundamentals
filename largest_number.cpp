#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter no : ";
    cin>>a;
    cout<<"enter no : ";
    cin>>b;
    cout<<"enter no : ";
    cin>>c;    
    cout<<"Largest is :"<<max(a,max(b,c));
    return 0;
}
