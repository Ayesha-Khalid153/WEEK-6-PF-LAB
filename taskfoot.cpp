#include<iostream>
using namespace std;
float vip(int budget,string type,int group );
float normal(int budget,string type,int group );
main(){
int budget1;
int group1;
string type1;
float result;
float result1;
cout<<"ENTER YOUR BUDGET = ";
cin>> budget1;
cout<<"ENTER THE TICKET TYPE (VIP OR NORMAL) = ";
cin>>type1;
cout<<"ENTER YOUR NUMBER OF PEOPLE IN GROUP = ";
cin>>group1;

result=vip(budget1,type1,group1);
if(result>0){
cout<<"YOU HAVE "<<result<<"LEVA LEFT";
}

result1 = normal(budget1,type1,group1);
if(result1<0){
    result1=-(result1);
cout<<"NOT ENOUGH MONEY! YOU NEED"<<result1<<" LEVA ";
}
}
float normal(int budget,string type,int group )
{
    float conclusion;
    float price;
    float totalPrice;
    float normalTicket=249.99;
if (type=="Normal"){
    if (group>=1 && group<=4)
    {
    conclusion = budget * (75.0/100);
    price = budget - conclusion;
    totalPrice = price - (normalTicket*group);
    }
    else if(group>=5 && group<=9)
    {
    conclusion = budget * (60.0/100);   
    price = budget - conclusion;
    totalPrice = price - (normalTicket*group);
    }
    else if (group>=10 && group<=24)
    {
    conclusion = budget * (50.0/100);  
    price = budget - conclusion;
    totalPrice = price - (normalTicket*group);
    }
    else if (group>=25 && group<=49)
    {
    conclusion = budget * (40.0/100);    
    price = budget - conclusion;
    totalPrice = price - (normalTicket*group);
    }
    else if (group>50)
    {
    conclusion = budget * (25.0/100);  
    price = budget - conclusion;
    totalPrice = price - (normalTicket*group);
    }
    return totalPrice;
}
}
float vip(int budget,string type,int group){

float conclusion;
float price;
float totalPrice;
float vipTicket=499.99;

if (type=="VIP"){

    if (group>=1 && group<=4)
    {
    conclusion = budget * (75.0/100);
    price = budget - conclusion;
    totalPrice = price - (vipTicket*group);
    }
    else if(group>=5 && group<=9)
    {
    conclusion = budget * (60.0/100);   
    price = budget - conclusion;
    totalPrice = price - (vipTicket*group);
    }
    else if (group>=10 && group<=24)
    {
    conclusion = budget * (50.0/100);  
    price = budget - conclusion;
    totalPrice = price - (vipTicket*group);
    }
    else if (group>=25 && group<=49)
    {
    conclusion = budget * (40.0/100); 
    price = budget - conclusion;
    totalPrice = price - (vipTicket*group);
    }
    else if (group>50)
    {
    conclusion = budget * (25.0/100);  
    price = budget - conclusion;
    totalPrice = price - (vipTicket*group);
    }
    return totalPrice;
}
}