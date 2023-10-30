#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Request {
    string date;
    string location;
    string companyName;
    string request;

    Request(const string& date, const string& location, const string& companyName, const string& request)
        : date(date), location(location), companyName(companyName), request(request) {}
};


bool compareRequestsByDate(const Request& a, const Request& b) {
    return a.date < b.date;
}

class CSVCombiner {
public:
    CSVCombiner(const string& inputFile1, const string& inputFile2, const string& outputFile)
        : inputFile1_(inputFile1), inputFile2_(inputFile2), outputFile_(outputFile) {}

    bool combineAndSortCSV() {
        ifstream file1(inputFile1_);
        ifstream file2(inputFile2_);

        if (!file1.is_open() || !file2.is_open()) {
            cerr << "Failed to open input files." << endl;
            return false;
        }

        vector<Request> requests;

        string line;
        while (getline(file1, line)) {
            istringstream iss(line);
            string date, location, companyName, request;
            getline(iss, date, ',');
            getline(iss, location, ',');
            getline(iss, companyName, ',');
            getline(iss, request, ',');
            requests.emplace_back(date, location, companyName, request);
        }

        while (getline(file2, line)) {
            istringstream iss(line);
            string date, location, companyName, request;
            getline(iss, date, ',');
            getline(iss, location, ',');
            getline(iss, companyName, ',');
            getline(iss, request, ',');
            requests.emplace_back(date, location, companyName, request);
        }

        sort(requests.begin(), requests.end(), compareRequestsByDate);

        ofstream outputFile(outputFile_);
        if (!outputFile.is_open()) {
            cerr << "Failed to create or open the output file." << endl;
            file1.close();
            file2.close();
            return false;
        }

        outputFile << "Date,Location,Company Name,Request" << endl;

        for (const Request& request : requests) {
            outputFile << request.date << "," << request.location << "," << request.companyName << "," << request.request << endl;
        }

        cout << "CSV files combined and sorted by date into " << outputFile_ << endl;

        file1.close();
        file2.close();
        outputFile.close();

        return true;
    }

private:
    string inputFile1_;
    string inputFile2_;
    string outputFile_;
};
int compareDates(const string& date1, const string& date2) {
    int month1, day1, month2, day2;

    if (sscanf(date1.c_str(), "%d-%d", &month1, &day1) != 2 ||
        sscanf(date2.c_str(), "%d-%d", &month2, &day2) != 2) {
        cerr << "Invalid date format." << endl;
        return 0;
    }

    if (month1 < month2)
        return 1;
    if (month1 > month2)
        return 0;

    if (day1 < day2)
        return 1;
    if (day1 > day2)
        return 0;

    return 1;
}
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
    void read1(const string& filename1, const string& filename2,const string& filename3) {
        ifstream file1(filename1);
        ifstream file2(filename2);
        ifstream file3(filename3);
        ifstream file4(filename3);

        if (!file1.is_open() || !file2.is_open()|| !file3.is_open()||!file4.is_open()) {
            cout << "Failed to open one or both files." << endl;
            return;
        }
        string name1,name,name2,d,re;
       
        int a,n;

        cout << "Are you licensed company or MVNO if licensed then press 1 else 2"<<endl;
        cin>>a;
        if(a==1){
        cout<<"enter company name"<<endl;
        cin>>name;
        }
        else if (a==2){
            cout<<"enter company name"<<endl;
            cin>>name2;
            cout<<"Enter your licensed company"<<endl;
            cin>>name;
        }
        cout<<"ENTER LOCATION OF Where you wnat spectrum "<<endl;
        cin>>name1;
        cout<<"Enter do wnat to know status of past request press 1 or wnat to putup new request press 2 "<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"for what date (MM-DD)"<<endl;
            cin>>d;
            
        }
        else if(n==2){
            
            cout<<"enter spectrum you want"<<endl;
            cin>>re;
            cout<<"enter todays date(mm-dd)"<<endl;
            cin>>d;
            ofstream file4(filename3, ios::app);
            if(a==2)
            file4 << " " << "," << name2 << "," << name1 << "," << re << endl;
            else if (a==1)
            file4 << " " << "," << name << "," << name1 << "," << re << endl;



        }
        

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
            
        
       
       
    
     int y=0;
        
         while (getline(file3,date3, ',') &&
               getline(file3,company3, ',') &&
               getline(file3,location2, ',') &&
               getline(file3, request,'\n')) {
                
                if((name==company3 || name2==company3) && name1==location2 && t/i<=0.05&&compareDates(date3,d)&&n==1)
                {y=1;

                   cout<<date3<<" "<<company3<<" "<<location2<<" "<<request<<endl;
                   t+=stof(request);


                   
                    
                    
                   
                    
                    
                       
                }
                 
                if((name==company3 || name2==company3) && name1==location2 && t/i<=0.05&&compareDates(date3,d)&&n==2)
                {y=1;

                   cout<<date3<<" "<<company3<<" "<<location2<<" "<<request<<endl;
                   t+=stof(request);


                   
                    
                    
                   
                    
                    
                       
                }
                
               
               
            }
            if(y==0){
                    cout<<"Invalid data"<<endl;

                }
            else    
            cout<<"Till this only allocation of spectrum is allowed acc to TRAI RULES"<<endl;
            



            
        

        



        file1.close();
        file2.close();
        file3.close();
        file4.close();
        

        
    }

    

   
};

