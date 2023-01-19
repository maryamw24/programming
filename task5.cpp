#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int sum =digitSum( number);
    cout<<sum;

}
int digitSum(int number)
{
    int sum = 0;
    while (number >0)
    {
    
        int  digit = number%10;
        sum = digit + sum;
        number = number /10;
        
    }
    return sum;
}