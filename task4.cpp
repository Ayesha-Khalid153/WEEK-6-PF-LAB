#include<iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speedd;
    string result;
    cout <<"ENTER THE SPEED= ";
    cin  >>speedd;
    result = checkSpeed(speedd);
    cout <<"THE CHECK SPEED  IS= "<<result;

}
string checkSpeed(float speed)
{
    string check;
    if (speed > 10)
    {
        check = "slow";
    }
    else if(speed > 10 && speed <= 50)
    {
        check = "average";

    }
    else if(speed > 50 && speed <= 150)
    {
        check = "fast";
    }
    else if(speed > 150 && speed = 1000)
    {
        check = "ultra-fast";
    }
    else{
        check = "extremely-fast"
    }
    return check;
}