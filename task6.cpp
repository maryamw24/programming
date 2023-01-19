#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int GCD);


main()
{
    int number1, number2, GCD;
    cout<<"Enter bigger number:";
    cin>>number1;
    cout<<"Enter smaller number:";
    cin>>number2;
    GCD =  calculateGCD( number1, number2);
    int LCM =  calculateLCM( number1,  number2,  GCD);
    cout<<LCM;

}

int calculateGCD(int number1, int number2)
{
    int GCD;
    for(int count= 1; count <= number2;count = count + 1 )
    {
        if (number1 % count == 0 && number2 % count == 0)
        {
          GCD = count;
        }
    }
    cout<<GCD<<endl;
    return GCD;
}
int calculateLCM(int number1, int number2, int GCD)
{
    int product = number1 * number2;
    int LCM = product / GCD;
    return LCM;
}