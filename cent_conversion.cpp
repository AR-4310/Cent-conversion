#include <iostream>

using namespace std;

int main()

{
    int cents,dollar,quarter,dime,nickel,penny;
    cout<<"Enter an amount of cents : ";
    cin>>cents;
    dollar=cents/100;
    cout<<"Dollar : "<<dollar<<endl;
    int dollar_ex=dollar*100;
    quarter=(cents-dollar_ex)/25;
    cout<<"Quarter : "<<quarter<<endl;
    int quarter_ex=quarter*25;
    dime=(cents-(dollar_ex+quarter_ex))/10;
    cout<<"Dime : "<<dime<<endl;
    int dime_ex=dime*10;
    nickel=(cents-(dollar_ex+quarter_ex+dime_ex))/5;
    cout<<"Nickel : "<<nickel<<endl;
    int nickel_ex=nickel*5;
    penny=(cents-(dollar_ex+quarter_ex+dime_ex+nickel_ex))/1;
    cout<<"Penny : "<<penny;
    return 0;

}
