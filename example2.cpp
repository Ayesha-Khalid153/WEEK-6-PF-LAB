#include<iostream>
using namespace std;
int isGreatest(int no1,int no2,int no3);
main()
{
    int num1;
    int num2;
    int num3;
    int result;
    cout <<"ENTER 1ST NUM= ";
    cin  >>num1;
    cout <<"ENTER 2nd NUM= ";
    cin  >>num2;
    cout <<"ENTER 3rd NUM= ";
    cin  >>num3;
    result= isGreatest(num1,num2,num3);
    cout <<"GREATEST NUMBER IS= "<<result;
}
int isGreatest(int no1,int no2,int no3)
{
    int Greatest;   
    if(no3 > no2 && no3 > no1)
    {
        Greatest = no3;
     }
    else if(no2 > no1 && no2 > no3)
    {
        Greatest = no2;
     }
    else if(no1 > no2 && no1 > no3)
    {
        Greatest = no1;
     }
     else{
        Greatest = 0;
     }
     return Greatest;

}