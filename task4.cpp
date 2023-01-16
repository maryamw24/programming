#include <iostream>
using namespace std;
float billRegular(int time);
float billPremium(float time, char period);

main()
{
    int time;
    char service;
    float total;
    cout<<"enter your service:";
    cin>>service;
    cout<<"enter your time in minutes:";
    cin>>time;
    if (service =='r')
    {
        total = billRegular(time);
        cout<<total;
    }
    if (service == 'p')
    {
        char period;
        cout<<"enter day(d) / night (n):";
        cin>>period;
        total = billPremium( time, period);
        cout<<total;
    }

}

float billRegular(int time)
{
    float total = 10;
    float extra;
    if (time> 50)
    {
        extra = (time - 50)*0.20;
        total = 10 + extra;
    }
    return total;
}

float billPremium(float time, char period)
{
    float total = 25;
    float extra;
    if (period == 'd')
    {
        if (time>75)
        {
            extra = (time - 75)*0.10;
            total = time + extra;
        }
        return total;
    }
    else if (period == 'n')
    {
        if (time >100)
        {
            extra = (time - 100)*0.05;
            total = time + extra;
        }
        return total;
    }
    return total;
}