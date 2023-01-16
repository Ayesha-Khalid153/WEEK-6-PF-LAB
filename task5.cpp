#include<iostream>
using namespace std;
float totalIncome(string type, int rows,int coloumns);
main()
{
    string typee;
    int rowss;
    int coloumnss;
    float result;
    cout <<"ENTER THE TYPE= ";
    cin  >>typee;
    cout <<"ENTER THE NUMBER OF COLOUMNS= ";
    cin  >>coloumnss;
    cout <<"ENTER THE NUMBER OF ROWS= ";
    cin  >>rowss;
    result = totalIncome(typee,rowss,coloumnss);
    cout <<"THE TOTAL INCOME IS= "<<result;
}
float totalIncome(string type, int rows,int coloumns)
{
    float amount;
    if(type == "premiere")
    {
    amount = rows * coloumns * 12;
    }
     if(type == "normal")
    {
    amount = rows * coloumns * 7.50;
    }
     if(type == "discount")
    {
    amount = rows * coloumns * -5;
    }
    return amount;
}