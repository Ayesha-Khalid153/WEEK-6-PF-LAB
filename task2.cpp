#include<iostream>
using namespace std;
int discount(string day , string month ,int amount);
main()
{
    int totalAmount;
 string monthh;
        
    string  dayy;
    int result;
    cout <<"ENTER THE TOTAL AMOUNT= ";
    cin  >>totalAmount;
    cout <<"ENTER THE DAY= ";
    cin  >>dayy;
    cout <<"ENTER THE MONTH= ";
    cin  >>monthh;
    result = discount( dayy ,monthh ,totalAmount);
    cout <<"YOUR TOTAL AMOUNT IS= " << result;
}
    int discount(string day , string month ,int amount)
{
    int payAble;
    int discount;
    if(day == "Sunday" && month == "October" || month == "March" || month == "August")
    {
        discount = (amount * 10)/100;
        payAble = amount - discount;
    }
    else if(day == "Monday" && month == "November" || month == "December")
    {
        discount = (amount * 5)/100;
        payAble = amount - discount;
    }
    else
    {
        payAble = amount;
    }
    return payAble; 
}