#include<iostream>
using namespace std;
char calculateGrade(int marks);
main()
{
    int stdMarks;
    char result;
    cout <<"ENTER YOUR MARKS= ";
    cin  >>stdMarks;
    result = calculateGrade( stdMarks);
    cout <<"YOUR GRADES ARE= "<<result;
}
char calculateGrade(int marks)
{
    char grade;
    if(marks < 50)
    {
        grade = 'F';
    }
     else if(marks >= 50 && marks <= 60)
     {
        grade = 'E';
     }
      else if(marks >= 61 && marks <= 70)
      {
        grade = 'D';
      }
    else if (marks >= 71 && marks <= 80)
    {
        grade = 'C';
    }
    else if(marks >= 81 && marks <= 85)
    {
        grade = 'B';
    }
    else{
        grade = 'A';
    }
    return grade;
}