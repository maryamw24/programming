#include <iostream>
using namespace std;

main()
{
    int date;
    string month;
    cout<<"enter your date of birth: ";
    cin>>date;
    cout<<"Enter your birthday month:";
    cin>>month;
    if ((date >=19 && date <= 21) && (month == "march" && month == "april"))
    {
        cout<<"zodiac sign : Aries"<<endl;
        cout<<"zodiac symbol : The Ram";
    }
    if ((date == 20) && (month == "april"&& month == "may"))
    {
        cout<<"zodiac sign: Taurus"<<endl;
        cout<<"zodiac symobol : The Bull"<<endl;
    }
    if ((date >= 20 && date <= 22) && (month =="may" && month == "june"))
    {
        cout<<"zodiac sign: Gemini"<<endl;
        cout<<"zodiac symobol : The Twins "<<endl;
    }
    if ((date >= 22 && date <= 23) && (month == "june" && month =="july"))
    {
         cout<<"zodiac sign: Cancer"<<endl;
        cout<<"zodiac symobol : The Crab"<<endl;
    }
    if ((date >= 22 && date <= 23) && (month == "july" && month == "august"))
    {
         cout<<"zodiac sign: Leo"<<endl;
        cout<<"zodiac symobol : The Lion"<<endl;
    }
    if ((date >= 22 && date <= 23) && (month == "august" && month == "september"))
    {
         cout<<"zodiac sign: Virgo"<<endl;
        cout<<"zodiac symobol : The Virgin"<<endl;
    }
    if ((date >=22 && date <= 23) && (month == "september" && month =="october"))
    {
         cout<<"zodiac sign: Libra"<<endl;
        cout<<"zodiac symobol : The Scales"<<endl;
    }
    if ((date >= 21 && date <= 23) && (month == "november" && month =="october"))
    {
         cout<<"zodiac sign: Scorpio"<<endl;
        cout<<"zodiac symobol : The Scorpian"<<endl;
    }
    if ((date >= 21 && date <= 22) && (month == "november" && month =="december"))
    {
        cout<<"zodiac sign: Sagittarius"<<endl;
        cout<<"zodiac symobol : The Archer"<<endl;
    }
    if ((date >= 19 && date <= 22) && (month == "january" && month =="december"))
    {
        cout<<"zodiac sign :capricorn"<<endl;
        cout<<"zodiac symobol : The Goat "<<endl;
    }
    if ((date >= 18 && date <= 20) && (month == "january" && month =="februrary"))
    {
        cout<<"zodiac sign: Aquarius"<<endl;
        cout<<"zodiac symobol : The Water Bearer"<<endl;
        
    }
    if ((date >= 19 && date <= 20) && (month == "march" && month =="februrary"))
    {
        cout<<"zodiac sign: Pisces"<<endl;
        cout<<"zodiac symobol : The Fishesr"<<endl;
    }
}




