#include<iostream>
#include<string>
using namespace std;


int main(){
 long long x;
    cin >> x;
    string Num = to_string(x);
    
    if (Num.length() != 9) {
        cout << "Invalid input" << endl;
        return 1;
    }
    int d1 = Num[0]-'0';
    int d2 = Num[1]-'0';
    int d3 = Num[2]-'0';
    int d4 = Num[3]-'0';
    int d5 = Num[4]-'0';
    int d6 = Num[5]-'0';
    int d7 = Num[6]-'0';
    int d8 = Num[7]-'0';
    int d9 = Num[8]-'0';
    int y = (d1 * 10) +(d2 * 9)+(d3 * 8)+ (d4 * 7) +(d5 * 6) + (d6 * 5)+ (d7 * 4) +(d8 * 3) +(d9 * 2);
    int checksum=11 - (y % 11);
     if (checksum==10) {
        cout <<x<< "X" <<endl; 
    } else if (checksum == 11) {
        cout <<x<< "0" <<endl;
    } else {
        cout <<x<<checksum<<endl;  
    }

 }
