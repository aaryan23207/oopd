#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;

int main()
{time_t currentTime;
    struct tm* localTimeInfo;
    time(&currentTime);
    localTimeInfo = localtime(&currentTime);

    
    int year = localTimeInfo->tm_year + 1900; 
    int month = localTimeInfo->tm_mon + 1;     
    int day = localTimeInfo->tm_mday;          

    
    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
}