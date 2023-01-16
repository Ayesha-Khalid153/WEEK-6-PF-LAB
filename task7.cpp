#include<iostream>
#include <conio.h>
using namespace std;

bool greaterNum(int num1,int num2,int num3);
main()
{
    int num1;
    int num2;
    int num3;
    bool result;
    cout <<"ENTER 1ST NUMBER= ";
    cin  >>num1;
    cout <<"ENTER 2ND NUMBER= ";
    cin  >>num2;
    cout <<"ENTER 3RD NUMBER= ";
    cin  >>num3;
    result = greaterNum(num1,num2,num3);
    cout<<result;
    
}
bool greaterNum(int num1,int num2,int num3)
{
    if((num1 ==num2) && (num1==num3) && (num2==num3))
    {	
        return true;
    }

    else
    {
       return false;
    }
    return 0;
}