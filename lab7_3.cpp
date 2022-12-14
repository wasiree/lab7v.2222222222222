#include<iostream>
#include<cmath>
using namespace std;

int adiff(int A,int B){
    int c;
    c = A-B;
    c = abs(c);
    if (c%360<=180){
    return c%360;
    }else{
    return 360-(c%360);
    }
}
