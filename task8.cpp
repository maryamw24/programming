#include <iostream>
using namespace std;
float calculateMoney(int age, float toyPrice, float machinePrice);

main()
{
    int age;
    float toyPrice;
    float machinePrice;
    float total;
    cout<<"Enter lilly's age:";
    cin>>age;
    cout<<"Enter the toy price:";
    cin>>toyPrice;
    cout<<"Enter the machine price:";
    cin>>machinePrice;
    total = calculateMoney(age, toyPrice, machinePrice);
    if (total >= machinePrice)
    {
        float left = total - machinePrice;
        cout<< "YESS!!"<<endl;
        cout<<left;
    }
    else if (total < machinePrice)
    {
        float left = machinePrice - total;
        cout<<"NOO!!"<<endl;
        cout<<left;
    }
}
float calculateMoney(int age, float toyPrice, float machinePrice)
{
    float evenBirthday;
    float oddBirthday;
    float cashAmount = 0; 
    float result = 0;
    float cashAmount1;
    float cashAmount2;
    float total;
    if (age %2 == 0)
    {
        evenBirthday = age/2;
        oddBirthday = age /2;
        for(int count = 1; count <= evenBirthday ; count = count + 1)
        {
            cashAmount= cashAmount + 10;
            result = cashAmount + result;
            
        }
        
        cashAmount1 = result - evenBirthday;
        cashAmount2 = oddBirthday * toyPrice;
        total = cashAmount1 + cashAmount2;

    }
    else if (age %2 != 0)
    {
        evenBirthday = age/ 2;
        oddBirthday = (age / 2) + 1;
        for(int count = 1; count <= evenBirthday; count = count + 1)
        {
            cashAmount= cashAmount + 10;
            result = cashAmount + result;
        }
        cashAmount1 = result - evenBirthday;
        cashAmount2 = oddBirthday * toyPrice;
        total = cashAmount1 + cashAmount2;
    }
    return total;
}