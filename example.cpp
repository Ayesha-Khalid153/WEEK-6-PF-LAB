#include<iostream>
using namespace std;
main()
{
 int price;
 string brand;
 cout <<"ENTER THE BRAND OF THE DRESS= ";
 cin  >>brand;
 cout <<"ENETR THE PRICE= ";
 cin  >>price;
 if((price <= 1500) && (brand == "breakout"))
 {
   cout <<"BUY THE DRESS!";
 }
 else
 {
   cout <<" DO NOT BUY THE DRESS!";
 }
}