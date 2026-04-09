#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    int a,b,c;
    int smallest,middle,largest;
    cout<<"enter no :";
    cin>>a;
    cout<<"enter no :";
    cin>>b;
    cout<<"enter no :";
    cin>>c;
    smallest=min(a,min(b,c));
    largest=max(a,max(b,c));
    middle = a+b+c-smallest-largest;
    cout<<smallest<<endl<<middle<<endl<<largest<<endl;

    return 0;
}
