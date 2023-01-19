#include <iostream>
using namespace std;
float calculatePrice(int year, float money);

main()
{
    int year;
    float money;
    cout<<"Enter the year:";
    cin>>year;
    cout<<"Enter the money:";
    cin>>money;
    float price =calculatePrice( year,  money);
    if (price <= money)
    {
        float left = money - price;
        cout<<"He will live carefree and will have "<<left<<"dollars left.";
    }
    else 
    {
        float left =  price - money;
        cout<<"He will need "<<left<<"dollars to survive.";  
    }
}

float calculatePrice(int year, float money)
{
    float price1 = 0;
    float price2 = 0;
    for(int count = 1800; count <= year; count = count +2)
    {
        price1 = price1 + 12000;
    }
    for(int count= 1801, age = 19; count <= year; count = count + 2, age = age + 2)
    {
        price2 = price2 + (12000 + (50*age));
    }
    float price = price1 + price2;
    return price;
}