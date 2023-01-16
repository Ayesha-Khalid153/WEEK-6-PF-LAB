#include<iostream>
#include<cmath>
using namespace std;
float play(string year,int weekend,int holiday);
main(){
    string years;
    int weekends;
    int holidays;
    float conclusion;
    cout<<"ENTER THE NAME OF YEAR(normal,leap) = ";
    cin>>years;
    cout<<"ENTER THE NUMBER OF HOLIDAYS = ";
    cin>>holidays;
    cout<<"ENTER THE NUMBER OF WEEKEND = ";
    cin>>weekends;

conclusion=play(years,weekends,holidays);
cout<<"VALADAMIR PLAYS THROUGH OUT THE YEAR =  "<<conclusion;
}

float play(string year,int weekend,int holidays)
{
    float vollyBollPlay;
    
    vollyBollPlay= (48 * 3)/4 + (2*(holidays)/3);
    if(year == "normal" )
    {
        return vollyBollPlay;
    }
    if (year=="leap"){
        
        vollyBollPlay = (vollyBollPlay * 0.15) + vollyBollPlay; 
    }
    return vollyBollPlay;

}