/*
  Author: Chelsea Bhuiyan
  Course: CSCI-135
  Instructor: Genady Maryash
  Assignment: Lab 1D
  
  This program asks the user to enter a year and month and prints number of days in month
*/

#include <iostream>       
using namespace std;       

int main()
{
    int year,month;   
    cout<<"Enter year:";  
    cin>>year;   
    cout<<"Enter month:";  
    cin>>month;    
    
    if (month==2)                                               //have to put febrary first
    {
        if ((year%400==0) || ((year%4==0) && (year%100!=0)))   //if year is leap year prints 29 days
        {
            cout<<"29 days";   
        }
        else
        {
            cout<<"28 days";                                   //else its not a leap year print 28 days 
        }
    }
    else if (month== 4 || month==6 || month==9 || month==11)    //if its months 4,6,9,11 it prints 30 days
    {
        cout<<"30 days";    
    }
    else if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 ||month==12)   //if its 1,3,5,7,8,10,12 prints 31 days
    {
        cout<<"31 days";     
    }
    return 0;  
}