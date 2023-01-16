#include <iostream>
using namespace std;
string printActivity(string temperature, string humidity);


main()
{
    string temperature;
    string humidity;
    string activity;
    cout<<"Enter temperature as (warm/ cold):";
    cin>>temperature;
    cout<<"Enter humidity as(humid/ dry):";
    cin>>humidity;
    if (temperature == "warm" && humidity== "dry")
    {
        cout<<"Play tennis";
    }
    else if (temperature == "warm" && humidity == "humid")
    {
        cout<<"swim";
    }
    else if (temperature == "cold" && humidity == "dry")
    {
        cout<<"play bascketball";
    }
    else if (temperature == "cold" && humidity == "humid")
    {
        cout<< "Watch TV";
    }
}