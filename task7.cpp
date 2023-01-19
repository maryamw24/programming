#include <iostream>
using namespace std;
void printPercentage(int integer);
main()
{
    float integer;
    cout<<"Enter any integer (1-1000):";
    cin>>integer;
    printPercentage( integer);

}

void printPercentage(int integer)
{
    float percent_1; 
    float percent_2;
    float percent_3;
    float percent_4;
    float percent_5;
    float number;
    float p1count = 0.0;
    float p2count = 0.0;
    float p3count = 0.0;
    float p4count = 0.0;
    float p5count = 0.0;
    for(int count=1; count<= integer; count = count +1)
    {
        
        cout<<"Enter number:";
        cin>>number;
        if (number<200)
        {
            p1count = p1count + 1;
            percent_1 = (p1count/ integer)*100;
        }
        else if (number >= 200 && number <400)
        {
            p2count= p2count +1;
        }
        else if (number>= 400 && number <600)
        {
            p3count = p3count + 1;
        }
        else if (number >= 600 && number < 800)
        {
            p4count = p4count+ 1;
        }
        else if (number >= 800 && number <=1000)
        {
            p5count = p5count + 1;
        }
    }
    percent_1 = (p1count*100.00)/integer;
    percent_2 = (p2count*100.00)/integer;
    percent_3 = (p3count*100.00)/integer;
    percent_4 = (p4count*100.00)/integer;
    percent_5 = (p5count*100.00)/integer;
    cout<<percent_1<<"%"<<endl;
    cout<<percent_2<<"%"<<endl;
    cout<<percent_3<<"%"<<endl;
    cout<<percent_4<<"%"<<endl;
    cout<<percent_5<<"%"<<endl;

}