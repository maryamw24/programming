#include<iostream>
using namespace std;
void Series(int number);
main ()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;    
    Series(number);
}
void Series(int number)
{
    int previous= 0;
    int current = 1;
    int next;
    cout<<previous<<","<<current;
    for(int count = 1; count <=number -2; count = count + 1)
    {
        next = previous + current;
        cout<<","<<next;
        previous = current;
        current = next;
    }

}