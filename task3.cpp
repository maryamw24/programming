#include<iostream>
using namespace std;
int totalDigits(int number);

main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
    int digits = totalDigits(number);
    cout<<digits;

}
int totalDigits(int number)
{
    int count= 0;

    while(number> 0)
    {
        number = number /10;
        count = count +1;
    }
    return count;
}   

