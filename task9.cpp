#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void showghost(int x, int y);
char getCharAtxy(short int x, short int y);
void clear(int x, int y, char previous);

main()
{
    system("cls");
    printMaze();
    int gx = 1;
    int gy = 1;
    string direction = "right";
    string direction1 = "up";
    char previous;
    showghost(gx, gy);
    while(true)
    {
      Sleep(100);
      if (direction == "right")
      {
        char nextlocation = getCharAtxy(gx +1 , gy);
        if (nextlocation == '%')
        {
          direction = "left";
        }
        else if (nextlocation == ' ' || nextlocation == '.')
        {
          clear (gx, gy, previous);
          gx = gx +1 ;
          previous = nextlocation;
          showghost(gx, gy);
        }
       }
      if (direction == "left")
      {
        char nextlocation = getCharAtxy(gx-1, gy);
        if (nextlocation == '%')
        {
          direction = "right";
        }
        else if (nextlocation == ' ' || nextlocation == '.')
        {
          clear (gx, gy, previous);
          gx = gx -1 ;
          previous = nextlocation;
          showghost(gx, gy);
        }
      }
      int gx1 = 3;
      int gy1 = 3;
      showghost(gx1, gy1);
      if (direction1 == "up")
      {
        char nextlocation1 = getCharAtxy(gx1, gy1 - 1);
        if (nextlocation1 == '%')
        {
          direction1 = "down";
        }
        else if (nextlocation1 == ' ' || nextlocation1 == '.')
        {
          clear (gx1, gy1, previous);
          gy1 = gy1-1 ;
          previous = nextlocation1;
          showghost(gx1, gy1);
        }
       }
      if (direction1 == "down")
      {
        char nextlocation1 = getCharAtxy(gx, gy1 +1 );
        if (nextlocation1 == '%')
        {
          direction1 = "up";
        }
        else if (nextlocation1 == ' ' || nextlocation1 == '.')
        {
          clear (gx1, gy1, previous);
          gy1 = gy1 + 1 ;
          previous = nextlocation1;
          showghost(gx1, gy1);
        }
      }
    }
}

void printMaze()
{
    cout << "%%%%%%%%%%"<<endl;
    cout << "%  .   . %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%        %"<<endl;
    cout << "%%%%%%%%%%"<<endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void showghost(int x, int y)
{
    gotoxy(x, y);
    cout<<"G";
}

char getCharAtxy (short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout<< previous;
}

