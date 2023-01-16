#include <iostream>
using namespace std;

main()
{
    int examHour, examMinute, examTime;
    int arriveHour, arriveMinute, arriveTime;
    int hour, minute;
    cout<<"Enter hour of exam time:";
    cin>>examHour;
    cout<<"Enter minutees of exam time:";
    cin>>examMinute;
    examTime = (examHour*60) + examMinute; 
    cout<<"Enter hour of arrival:";
    cin>>arriveHour;
    cout<<"Enter minute of arrival:";
    cin>>arriveMinute;
    arriveTime= (arriveHour*60) + arriveMinute;
    if (arriveTime <=examTime)
    {
        int leftTime = examTime - arriveTime;
        if(leftTime<=30)
        {
            cout<<"On TIme!!"<<endl;
            
        }
       if (leftTime>30)
        {
            cout<<"Early!!"<<endl;
            cout<<leftTime;
        }
        if (leftTime < 60)
        {
            cout<<leftTime<<" minutes before than the start.";
        }
        if (leftTime >= 60)
        {
            hour = leftTime/60;
            minute = leftTime%60;
            cout<<hour<<":"<<minute<<" hours before than the start.";
        }


    }
    else if (arriveTime> examTime)
    {
        int leftTime = arriveTime - examTime;
        cout<<"LATE!!"<<endl;
        if (leftTime < 60)
        {
            cout<<leftTime<<" minutes ater than the start.";
        }
        if (leftTime >= 60)
        {
            hour = leftTime/60;
            minute = leftTime%60;
            cout<<hour<<":"<<minute<<" after than the start.";
        }
        
    }
}
