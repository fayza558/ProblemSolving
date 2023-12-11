#include <iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;
    //1256
    //1           2            5           6
    //firstDigit  secondDigit  thirdDigit   fourthDigit
    for(;;)
    {
     year++;
     int firstDigit=(year/1000);
     int secondDigit=(year/100)%10;
     int thirdDigit=(year/10)%10;
     int fourthDigit=(year%10);
    // cout<<firstDigit<<secondDigit<<thirdDigit<<fourthDigit;
    if(firstDigit!=secondDigit&&firstDigit!=thirdDigit&&firstDigit!=fourthDigit&&secondDigit!=thirdDigit&&secondDigit!=fourthDigit&&thirdDigit!=fourthDigit)
    {
        break;
    }


    }
    cout<<year<<endl;

    return 0;
}
