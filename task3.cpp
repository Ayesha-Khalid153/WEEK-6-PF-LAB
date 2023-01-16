#include<iostream>
using namespace std;
string checkTitle(char gender , int age);
main()
{
    char genderr;
    int agee;
    string rersult;
    cout <<"ENTER THE GENDER= ";
    cin  >>genderr;
    cout <<"ENTER TEH AGE= ";
    cin  >>agee;
    rersult = checkTitle(genderr , agee);
    cout <<"YOUR TITLE IS= " <<rersult;
}
string checkTitle(char gender , int age)
{
    string check;
    if(gender == 'm' && age >= 16 )
    {
    check = "Mr.";
    }
    else if(gender == 'm' && age < 16)
    {
        check = "MASTER";
    }
    else if(gender == 'f' && age  >= 16)
    {
        check = "Ms.";
    }
    else if(gender == 'f' && age < 16)
    {
        check = "MISS";
    }
    return check;
}