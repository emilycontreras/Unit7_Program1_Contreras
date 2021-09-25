#include <iostream>
#include <string>
using namespace std;

struct timeOfDay 
{
  short hour;
  short minute;
  short second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct Event
{
string eventName;
timeOfDay eventTime;
appDate eventDate;
bool isUrgent;
};

int main() {
  
  Event gathering;

  gathering.eventName = "Met Gala";
  gathering.eventTime.hour = 6;
  gathering.eventTime.minute = 30;
  gathering.eventTime.second = 00;

  gathering.eventDate.dayOfMonth = 8;
  gathering.eventDate.month = 10;
  gathering.eventDate.year = 2020;
  gathering.isUrgent = 1;

  cout<< gathering.eventName <<endl;
  cout<< gathering.eventTime.hour<< ":";
  cout<< gathering.eventTime.minute << ":";
  cout<< gathering.eventTime.second<<endl;
  cout<< gathering.eventDate.dayOfMonth<< "/";
  cout<< gathering.eventDate.month<< "/";
  cout<< gathering.eventDate.year<<endl;
  cout<<"Urgent!";


  return 0;
}