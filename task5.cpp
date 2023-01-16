#include <iostream>
using namespace std;
float billWeekend(string fruit, float quantity);
float billWeekday(string fruit, float quantity);

main()
{
    string fruit;
    float quantity;
    string day;
    float total;
    cout<<"Enter the fruit:";
    cin>>fruit;
    cout<<"enter the quantity of fruit:";
    cin>>quantity;
    cout<<"Enter the day:";
    cin>>day;
    if (day== "monday" || day=="tuesday" || day == "wedesday" || day == "thursday" || day == "friday")
    {
        total= billWeekday(fruit,  quantity);
        cout<<total;
    }
    if (day == "sunday" || day == "saturday")
    {
        total= billWeekend(fruit, quantity);
        cout<<total;

    }


}

float billWeekend(string fruit, float quantity)
{
    float total;
    if (fruit == "banana")
    {
        total = quantity*2.70;
    }
    if (fruit == "apple")
    {
        total = quantity*1.25;
    }
    if (fruit == "orange")
    {
        total = quantity*0.90;
    }
    if (fruit == "grapefruit")
    {
        total = quantity*1.60;
    }
    if (fruit == "kiwi")
    {
        total = quantity*3.00;
    }
    if (fruit == "pineapple")
    {
        total = quantity*5.60;
    }
    if (fruit == "grapes")
    {
        total = quantity*4.20;
    }
    return total;

}

float billWeekday(string fruit, float quantity)
{
    float total;
    if (fruit == "banana")
    {
        total = quantity*2.50;
    }
    if (fruit == "apple")
    {
        total = quantity*1.20;
    }
    if (fruit == "orange")
    {
        total = quantity*0.85;
    }
    if (fruit == "grapefruit")
    {
        total = quantity*1.45;
    }
    if (fruit == "kiwi")
    {
        total = quantity*2.70;
    }
    if (fruit == "pineapple")
    {
        total = quantity*5.50;
    }
    if (fruit == "grapes")
    {
        total = quantity*3.85;
    }
    return total;

}



