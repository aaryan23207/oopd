#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    ifstream file("india_data.csv");
    if (!file.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    string sno,year,interst_rate,inflation,governmnet,continent;
    double invested_amount,year_investment;
    
    cout<<"Enter invested amount";
    cin>>invested_amount;
    cout<<"Year of investment";
    cin>>year_investment;

    string header;
    getline(file,header);
    double total_interest=invested_amount;
    double total_inflation_adjusment=invested_amount;


    while(

        getline(file,sno,',')&&
        getline(file,year,',')&&
        getline(file,interst_rate,',')&&
        getline(file,inflation,',')&&
        getline(file,governmnet,',')&&
        getline(file,continent,'\n')){
            double invested_year=stod(year);
            if(invested_year>=year_investment && invested_year<=2022){

            double ir1=stod(interst_rate);
            double i=stod(inflation);

            double interest_earned=1 + (ir1/100);
            double inflation_adjusment=1 + ((ir1-i)/100);
            total_inflation_adjusment=total_inflation_adjusment*inflation_adjusment;
            total_interest=total_interest*interest_earned;
            }
        }

   
    cout<<fixed<<setprecision(2)<<"actual money recieved="<<total_interest<<endl;
    cout<<fixed<<setprecision(2)<<"value of money obtained after adding interest had in the year it was invested ="<<total_inflation_adjusment;

    file.close();
    return 0;    

       
       
        

    }
    


