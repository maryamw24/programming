#include<iostream>
using namespace std;
int frequencyChecker(int number, int Digit);

main()
{
    int number;
    int Digit;
    cout<<"Enter the number:";
    cin>>number;
    cout<<"Enter the digit:";
    cin>>Digit;
    int frequency= frequencyChecker(number, Digit);
    cout<<frequency;


}

int frequencyChecker(int number, int Digit)
{
    int count = 0;
    while(number >0)
    {
        int digit = number% 10;
        number = number / 10;
    
        if (digit == Digit )
        {
            count = count + 1;
        }
    }
    return count;
}