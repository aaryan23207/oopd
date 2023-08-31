#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream file("spain_data.csv");
    if (!file.is_open()) {
        cout<<"failure to open file"<<endl;
        return 1;
    }
    string sno,year,interest_rate,inflation,govern,cont;
    double invested_amount,year_investment;
    
    cout<<"enter year of investment"<<endl;
    cin>>year_investment;
    if(year_investment<1999){
    cout<<"amount invested in pesta";
    cin>>invested_amount;
    invested_amount=invested_amount/166;
    }
    else{
    cout<<"amount invested in euro";
    cin>>invested_amount;
    }

    string header;
    getline(file,header);
    double total_money_received=invested_amount;
    double t=invested_amount;
    double d,c=0;

    while (getline(file,sno,',')&&getline(file,year,',')&&getline(file,interest_rate,',')&&getline(file,inflation,',')&&getline(file,govern,',')&&getline(file,cont,'\n'))
    {
        double invested_year=stod(year);
        if(invested_year>=year_investment && invested_year<=2022){
            double ir=stod(interest_rate);
            double i=stod(inflation);
            double total_interest= 1+(ir/100);
            double i1=1+((ir-i)/100);
            total_money_received=total_money_received*total_interest;
            t=t*i1;
        }
        if(invested_year<=1977){
            double i=stod(inflation);
            d=d+i;
    
        }
        else if(invested_year<=2022 &&invested_year>1977){
            double i=stod(inflation);
            c=c+i;
        }
    }
    cout<<"actual money received ="<<total_money_received<<endl;
    cout<<"value of money obtained after adding interest had in thr year it was invested="<<t<<endl;
    if(c>d){
        cout<<"monarchical era money grew faster";


    }
    else if(d>c)
    cout<<"dictatorial era money grew faster";
    cout<<"money grew"<<c<<"much in monarchical era";
    cout<<"money grew"<<d<<"much in dictatorial era";
    file.close();
    return 0;
    



}