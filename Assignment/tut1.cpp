/*
Given program is for finding area of a Traingle 
Program is already having variable declare and initialised
Finding area of a Triangle as float using typecasting 
*/

#include<iostream>
using namespace std;

float area(int base, int height)
{ 
float area;
area=(float)(base*height)/2;
return area;
 }

 
int main()
{
    // float area;
int base,height;
cout<<"Enter value of base and height"<<endl;
    cin>>base>>height;
    cout<<"Area of triangle: "<<area(base,height);
}