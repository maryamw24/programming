#include <iostream>
using namespace std;
float rentStudio(string month, int stay);
float rentAppartment(string month, int stay);

main()
{
    int stay;
    string month;
    cout<<"Enter number of stays:";
    cin>>stay;
    cout<<"Enter month :";
    cin>>month;
    float  rent1= rentStudio(month, stay);
    cout<<"studio rent :"<<rent1<<endl;
    float rent2= rentAppartment( month, stay);
    cout<<"Appartment rent :"<<rent2<<endl;
}




float rentStudio(string month, int stay)
{
    float rent;
    float discount;
    if (month == "october" || month == "may")
    {
        rent= stay*50;
        if (stay >=7 && stay <14)
        {
            discount = rent*0.05;
            rent = rent - discount;

        }
        if (stay >=14)
        {
            discount = rent*0.3;
            rent = rent - discount;
        }
    }
    if (month == "june" || month == "september")
    {
         rent = stay*72.20;
        if (stay>=14)
        {
            discount = rent*0.02;
            rent = rent - discount;
        }
    }
    if (month == "july" || month == "august")
    {
         rent = stay*76;
    }
    return rent;

}

float rentAppartment( string month, int stay)
{
    float rent;
    float discount;
    if (month == "may" || month == "october")
    {
        rent = stay*65;
        if (stay>=14)
        {
            discount = rent*0.1;
            rent = rent - discount;
        }
    }
    if (month == "june" || month== "september")
    {
        rent = stay*68.70;
        if (stay>=14)
        {
           discount = rent*0.1;
            rent = rent - discount;
        }
    }
    if (month == "july" || month == "august")
    {
        rent = stay*77;
        if(stay>=14)
        {
            discount = rent*0.1;
            rent = rent - discount;
        }
    }    
    return rent;
    
}
