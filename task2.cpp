#include <iostream>
using namespace std;

main()
{
    float  marks1, marks2, marks3, marks4, marks5;
    string name;
    float total;
    float percentage;
    string grade;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"enter marks in English :";
    cin>>marks1;
    cout<<"Enter marks in Maths :";
    cin>>marks2;
    cout<<"Enter marks in Chemistry:";
    cin>>marks3;
    cout<<"Enter marks in Social Sience:";
    cin>>marks4;
    cout<<"Enter marks in Biology:";
    cin>>marks5;
    cout<<name<<endl;
    total= marks1+ marks2 + marks3 + marks4 + marks5;
    cout<<"Total marks :"<<total<<endl;
    percentage = (total/500)*100;
    cout<<"percentage:"<<percentage<<endl;
    if (percentage >= 90 && percentage<= 100)
    {
        grade = "A+";
        cout<<"grade:"<<grade;
    }
    if (percentage>= 80 && percentage <=89)
    {
        grade = "A";
        cout<<"grade:"<<grade;
    } 
    if (percentage >=70 && percentage <= 79)
    {
        grade = "B+";
        cout<<"grade:"<<grade;
    }
    if (percentage >= 60 && percentage <= 69)
    {
        grade = "B";
        cout<<"grade:"<<grade;
    }
    if (percentage >= 50 && percentage <= 59)
    {
        grade = "C";
        cout<<"grade:"<<grade;
    }
    if (percentage >= 40 && percentade >=49 )
    {
        grade = "D";
        cout<<"grade:"<<grade;
    }
    if (percentage < 40)
    {
        grade = "F";
        cout<<"grade:"<<grade;
    }
    }

