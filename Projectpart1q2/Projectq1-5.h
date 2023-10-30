#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<ctime>
#include<limits>
using namespace std;

class spectrumRange {
private:
int t=0;

string z,date,company,spectrumrange,circle,Revenue_in_Cr;
public:
    void read1(const string& filename)
    {    ifstream file1(filename);  
        if (!file1.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Enter Date in (DD-MM-YY) :"<<endl;
        cin>>z;
       

        string header;
        getline(file1, header);

        
        while (getline(file1,date, ',') &&
               getline(file1,company, ',') &&
               getline(file1,spectrumrange, ',') &&
               getline(file1,circle, ',') &&
               getline(file1, Revenue_in_Cr,'\n')) {
                if(z==date)
                {
                    t=1;
                    
                    cout<<"Date:"<<date<<endl;
                    cout<<"Company :"<< company<<endl;
                    cout<<"Spectrum Range: "<< spectrumrange<<endl;
                    cout<<"Circle: "<< circle<<endl;
                    cout<<"Revenue in Cr : "<<Revenue_in_Cr<<endl;
                       
                }
               
            }
        
        if(t==0)
        {cout<<"Invalid Date "<<endl;}

        file1.close();
        
    }
    

   
};
class Subs {
private:
int t=0;
int i;
int w=0;

string date,company,location,subscribers,a;
public:
    void read1(const string& filename)
    {    ifstream file1(filename);  
        if (!file1.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Do you want to print all data of subscribers press 1 or do you want to search press 2"<<endl;
        cin>>i;
        
        if(i==1){
        string header;
        getline(file1, header);

        
        while (getline(file1,date, ',') &&
               getline(file1,company, ',') &&
               getline(file1,location, ',') &&
               getline(file1, subscribers,'\n')) {
                
                 w=1;   
                    
                    cout<<"Date:"<<date<<endl;
                    cout<<"Company :"<< company<<endl;
                    cout<<"Location: "<<location <<endl;
                    cout<<"Subscribers: "<< subscribers<<endl;
                       
                
               
            }
        
       
        file1.close();
        }
        else if (i==2){
            cout<<"enter date (MM-YY) or Company or location or subs"<<endl;
            cin>>a;
        


        

        string header;
        getline(file1, header);
       

        
        while (getline(file1,date, ',') &&
               getline(file1,company, ',') &&
               getline(file1,location, ',') &&
               getline(file1,subscribers,'\n')) {
                

                if(a==date || a==company|| a==location || a==subscribers){
                    cout<<date<<" "<<company<<" "<<location<<" "<<subscribers<<endl;
                    int w=1;
                }
                
                    
                    
                    
               
            }
        
       
        file1.close();
            
        }
        if (w==0)
        cout<<"invalid input"<<endl;
        if(i!=1&&i!=2)
        cout<<"invalid input"<<endl;
        
    }
    

   
};
class Allocate_spectrum {
private:
float t=0;
float i=0;
int x,p,a,b;

string z,y,date,company,spectrumrange,circle,Revenue_in_Cr;
string date2,company2,location,subscibers;
string date3,company3,location2,request;
public:
    void read1(const string& filename1, const string& filename2,const string& filename3) {
        ifstream file1(filename1);
        ifstream file2(filename2);
        ifstream file3(filename3);

        if (!file1.is_open() || !file2.is_open()|| !file3.is_open()) {
            cout << "Failed to open one or both files." << endl;
            return;
        }
        string name1,name;

        cout << "COMPANY NAME "<<endl;
        cin>>name;
        cout<<"LOCATION"<<endl;
        cin>>name1;

        string header1, header2;
        getline(file1, header1); 
        getline(file2, header2); 

        
        while (getline(file1,date, ',') &&
               getline(file1,company, ',') &&
               getline(file1,spectrumrange, ',') &&
               getline(file1,circle, ',') &&
               getline(file1, Revenue_in_Cr,'\n')) {
                if(name==company && name1==circle)
                {
                
                    z=spectrumrange;
                   
                    string numericPart;
    for (char c : z) {
        if (isdigit(c)) {
            numericPart += c;
        }
    }

    long numericValue;
    istringstream(numericPart) >> numericValue;
    t += numericValue;


   
                    
                       
                }
               
            }
        
      
        while (getline(file2,date2, ',') &&
               getline(file2,company2, ',') &&
               getline(file2,location, ',') &&
               getline(file2, subscibers,'\n')) {
                if(name==company2 && name1==location)
                {
                    
                    
                    
                    i += stof(subscibers);
                    
                    
                       
                }
               
            }
        
       
        if(t!=0 && i!=0){
        cout<<"Total spectrum in "<<name1<<" is "<<t<<"MHz"<<endl;
        cout<<"total subscribers in this area "<<i<<endl;
        cout<<"Current usage density "<<t/i<<"*10^6 "<<endl;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    
     
        
         while (getline(file3,date3, ',') &&
               getline(file3,company3, ',') &&
               getline(file3,location2, ',') &&
               getline(file3, request,'\n')) {
                if(name==company3 && name1==location2 && t/i<=0.05)
                {
                   cout<<date3<<" "<<company3<<" "<<location2<<" "<<request<<"MHz"<<endl;
                   cout<<"Request accepted and spectrum allocated"<<endl;
                   
                   t+=stof(request);
                   cout<<"New Spectrum at "<<location2<<" "<<t<<"MHz"<<endl;
                   cout<<"New Usage density is "<<t/i<<"*10^6 "<<endl;

                   
                    
                    
                   
                    
                    
                       
                }
                else if(name==company3 && name1==location2 && t/i>0.05){
                    cout<<"Request denied "<<"For "<<date3<<" "<<company3<<" "<<location2<<" "<<request<<"MHz"<<endl;
                    cout<<"BECAUSE TRAI now has imposed a policy that anybody having a usage density (measured as spectrum allocated per user) GREATER THAN 50000 in a circle will not allowed to bid for fresh spectrum."<<endl;
                    
                }
               
               
            }

            
        

        



        file1.close();
        file2.close();
        file3.close();

        
    }

    

   
};
class q4 {
private:
float t=0;
float i,j=0;
int x,p,a,b,u;

string z,y,date,company,spectrumrange,circle,Revenue_in_Cr;
string date2,company2,location,subscibers;
string date3,company3,location2,request;
string date4,company4,location3,request2,r;
public:
    void read1(const string& filename1, const string& filename2,const string& filename3,const string& filename4) {
        ifstream file1(filename1);
        ifstream file2(filename2);
        ifstream file3(filename3);
        ifstream file4(filename4);

        if (!file1.is_open() || !file2.is_open()|| !file3.is_open()||!file4.is_open()) {
            cout << "Failed to open one or both files." << endl;
            return;
        }
        string name1,name;

        cout << "ENTER COMPANY NAME WHOSE FUTURE DATA YOU WANT VIEW/SAVE "<<endl;
        cin>>name;
        cout<<"ENTER LOCATION OF COMPANY WHOSE FUTURE DATA YOU WANT VIEW/SAVE"<<endl;
        cin>>name1;

        string header1, header2;
        getline(file1, header1); 
        getline(file2, header2); 

        
        while (getline(file1,date, ',') &&
               getline(file1,company, ',') &&
               getline(file1,spectrumrange, ',') &&
               getline(file1,circle, ',') &&
               getline(file1, Revenue_in_Cr,'\n')) {
                if(name==company && name1==circle)
                {
                
                    z=spectrumrange;
                   
                    string numericPart;
    for (char c : z) {
        if (isdigit(c)) {
            numericPart += c;
        }
    }

    double numericValue;
    istringstream(numericPart) >> numericValue;
    t += numericValue;
    double k=stod(Revenue_in_Cr)/numericValue;
    if(k>j){
        j=k;
    }
    


   
                    
                       
                }
               
            }
        
      
        while (getline(file2,date2, ',') &&
               getline(file2,company2, ',') &&
               getline(file2,location, ',') &&
               getline(file2, subscibers,'\n')) {
                if(name==company2 && name1==location)
                {
                    
                    
                    
                    i += stof(subscibers);
                    
                    
                       
                }
               
            }
        
       
       
    
     
        ofstream file5(filename4);
         while (getline(file3,date3, ',') &&
               getline(file3,company3, ',') &&
               getline(file3,location2, ',') &&
               getline(file3, request,'\n')) {
                if(name==company3 && name1==location2 && t/i<=0.05)
                {

                   file5<<date3<<","<<company3<<","<<location2<<","<<request<<","<<stod(request)*j<<endl;
                   t+=stof(request);


                   
                    
                    
                   
                    
                    
                       
                }
                
               
               
            }
            cout<<"Data has been saved"<<endl;
            cout<<"Do you want to print future data then press 1 and enter else 0 and enter "<<endl;
            cin>>u;
            
            if(u==1)
            {while (getline(file4,date4, ',') &&
               getline(file4,company4, ',') &&
               getline(file4,location3, ',') &&
               getline(file4,request2, ',') &&
               getline(file4, r,'\n')) {
                
                {

                   cout<<date4<<" "<<company4<<" "<<location3<<" "<<request2<<" "<<r<<endl;

                   
                    
                    
                   
                    
                    
                       
                }
                
               
               
            }}



            
        

        



        file1.close();
        file2.close();
        file3.close();
        file4.close();
        file5.close();

        
    }

    

   
};
class Q5 :public Subs {
private:
int t=0;
int i;

string date4,MVNOcompany,location1,request,a,b;
public:
    void read2(const string& filename)
    {    ifstream file1(filename);  
        if (!file1.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"enter date (MM-YY) or MVNO Company or location or Request"<<endl;
        cin>>a;
        


        

        string header;
        getline(file1, header);

        
        while (getline(file1,date4, ',') &&
               getline(file1,MVNOcompany, ',') &&
               getline(file1,location1, ',') &&
               getline(file1,request,'\n')) {

                if(a==date4 || a==MVNOcompany|| a==location1 || a==request){
                    cout<<date4<<" "<<MVNOcompany<<" "<<location1<<" "<<request<<endl;
                }
                
                    
                    
                    
               
            }
        
       
        file1.close();
        
    }
    

   
};

