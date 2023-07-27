#include<iostream>
using namespace std;
int main()
{
    int num;
    int rev = 0;
    int remainder;

    cout<<"Enter the number : ";
    cin>>num;;

    while(num!=0){
        remainder = num%10;
        rev = rev * 10 + remainder;
        num = num/10;
    }
    cout<<rev;
}