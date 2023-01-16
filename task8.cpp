#include <iostream>
using namespace std;

main()
{
    int x;
    int y;
    int hinteger;
    cout<<"Enter x- coordiante:";
    cin>>x;
    cout<<"Enter the y-coordinate";
    cin>>y;
    cout<<"Enter integer h:";
    cin>>hinteger;
    int x_range = 3*hinteger;
    int y_range = 4*hinteger;

    if(x< x_range && y <hinteger)
    {
        cout<<"Inside";
    }
    else if((x> hinteger && x <2*hinteger) && (y>hinteger && y< y_range))
    {
        cout<<"inside";
    }
    else if(x<hinteger && y>hinteger)
    {
        cout<<"Outside";
    }
    else if(x< x_range && y>y_range)
    {
        cout<<"Outside";
    }
    else if(x>2*hinteger && y>hinteger)
    {
        cout<<"Outside";
    }
    else 
    {
        cout<<"Border";
    }

}