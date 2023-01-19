#include<iostream>
using namespace std;
void table(int number);

main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    table(number);

}

void table(int number)
{
    for(int count= 1; count <= 10; count = count+1)
    {
        int multiple = count*number;
        cout<<number<<" * "<< count<< " = "<<multiple<<endl;
    }
}