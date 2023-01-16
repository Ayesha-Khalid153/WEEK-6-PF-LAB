#include<iostream>
using namespace std;
float normall(int holidays,int weekends);
float  weeke(int holidays,int weekends);
main()
{
    int holidays;
    int weekends;
    float result;
    float result1;
    float year;
    cout <<"ENTER THE YEAR= ";
    cin  >>year;
    cout <<"ENTER THE HOLIDAYS= ";
    cin  >> holidays;
    cout <<"ENTER THE WEEKENDS= ";
    cin  >> weekends;
    result = normall(holidays,weekends);
    cout <<"LEAP= "<<result;
    result = weeke(holidays,weekends);
    cout <<"WEEKENDS=  "<<result;
}
float normall(int holidays,int weekends)
{   
    float normal;
    normal = (((2 * holidays)/3) + ((3 * weekends)/4)) * 48;
    return normal;
}
float weeke(int holidays,int weekends)
{
    float week;
    week = (week * 0.15) + (((2 * holidays)/3) + ((3 * weekends)/4)) * 48;
    return week;
}