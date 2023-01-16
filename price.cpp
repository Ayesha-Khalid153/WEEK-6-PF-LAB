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
 if( brand == "breakout"  || price <= 1500)
 {
   cout <<"BUY THE DRESS!";
 }
 if(price > 1500)
 {
   cout <<" DONOT BUY THE DRESS!";
  }
}