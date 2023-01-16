#include<iostream>
using namespace std;
float lowestPrice(int km,string period);
main()
{
    int kilo;
    string periodd;
    float result;

    cout <<"ENTER THE NO OF KILLMETERS= ";
    cin  >>kilo;
    cout <<"ENTER THE PERIOD(DAY,NIGHT)= ";
    cin  >>periodd;
    result=lowestPrice(kilo, periodd);
    cout <<"THE TOTAL PRICE IS= "<<result<<endl;
}
float lowestPrice(int km,string period)
{
    string transport;
    float price;
    if(km >20 && km < 100)
    {
        transport = "bus";
        if(period == "night" || "day")
        {
            price = 0.90 * km;
        }
    }
    else if (km > 100)
    {
        transport = "train";
        if(period == "night" || "day")
        {
            price = 0.06 * km;
        }
    }
    if((transport != "bus" && transport !="train"))
        {
            transport = "taxi";
            if(period == "night")
            {
                price = (0.9+0.70) * km;
            }
            if(period == "day")
            {
                price =(0.79 +0.70 )* km;
            }
        }
    return price;
}
