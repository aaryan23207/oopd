#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<ctime>
#include<limits>
#include<set>
#include<sstream>
using namespace std;


class Books {
private:
int t=0;
int i;
string x,z,book_id, authors, original_title, title, language_code, image_url, small_image_url,goodreads_book_id,best_book_id, work_id, books_count, isbn, isbn13, original_publication_year,average_rating, ratings_count, work_ratings_count, work_text_reviews_count, ratings_1, ratings_2,ratings_3, ratings_4, ratings_5;
int w;
public:
    void read1(const string& filename,int a)
    {    ifstream file1(filename);  
        if (!file1.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Enter Title or author/authors or ISBN  of Book you want to borrow :"<<endl;
        cin.ignore();
        getline(cin,z);
       

        string header;
        getline(file1, header);

        
        while (getline(file1,book_id, ',') &&
               getline(file1,goodreads_book_id, ',') &&
               getline(file1,best_book_id, ',') &&
               getline(file1,work_id, ',') &&
               getline(file1,books_count, ',') &&
               getline(file1,isbn, ',') &&
               getline(file1,isbn13, ',') &&
               getline(file1,authors, ',') &&
               getline(file1,original_publication_year, ',') &&
               getline(file1,original_title, ',') &&
               getline(file1,title, ',') &&
               getline(file1,language_code, ',') &&
               getline(file1,average_rating, ',') &&
               getline(file1,ratings_count, ',') &&
               getline(file1,work_ratings_count, ',') &&
               getline(file1,work_text_reviews_count, ',') &&
               getline(file1,ratings_1, ',') &&
               getline(file1,ratings_2, ',') &&
               getline(file1,ratings_3, ',') &&
               getline(file1,ratings_4, ',') &&
               getline(file1,ratings_5, ',') &&
               getline(file1,image_url, ',') &&
               getline(file1, small_image_url,'\n')) {
                if(z==title||z==authors||z==isbn)
                {
                    t=1;
                    
                    cout<<"BOOK ID:"<<book_id<<endl;
                    cout<<"Author :"<< authors<<endl;
                    cout<<"original title"<< original_title<<endl;
                    cout<<"Title"<< title<<endl;
                    cout<<"language_code"<< language_code<<endl<<"image_url"<< image_url<<endl<<"small_image_url"<< small_image_url<<endl<<"goodreads_book_id"<<goodreads_book_id<<endl<<"best_book_id"<<best_book_id<<endl<<"work_id"<< work_id<<endl<<"books count"<< books_count<<endl<<"ISBN"<< isbn<<endl<<"ISBN 13"<< isbn13<<endl<<"orignal publication year"<< original_publication_year<<endl<<"average rating"<<average_rating<<endl<<"rating count" <<ratings_count<<endl<<"work rating count"<< work_ratings_count<<endl<<"work text review count"<< work_text_reviews_count<<endl<<"rating 1"<< ratings_1<<endl<<"rating 2"<< ratings_2<<endl<<"rating 3"<<ratings_3<<endl<<"rating 4"<<ratings_4<<endl<<"rating 5"<< ratings_5<<endl;
                    if(stod(books_count)!=0)
                    {
                    cout<<"Book is Available for borrow AT THE LIBRARY"<<endl;
                    
                    cout<<"Do you want to borrow this book (TYPE 1 FOR YES/2 FOR NO)press  1 or 2 then  again again until program runs ususally takes 4 tries"<<endl;
                    cin.ignore();
                    cin>>w;
                   

                    
                    
                    if(w==1&& a==1)
                    {
                    cout<<"book borrowed please return book after 1 month "<<endl;

                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    month+=1;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }
                    else if (w==1&& a==2){
                    cout<<"book borrowed please return book after 6 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    month+=6;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }

                    else if (w==2)
                    cout<<"book not borrowed"<<endl;
                    }
                    else
                    cout<<"Book is not available AT THE LIBRARY it is curently borrowed"<<endl;

                }
               
                

               

            
        }
        
        if(t==0)
        {cout<<"Book is not in the library"<<endl;
        cout<<"Do you want to loan book from different institute (TYPE 1 FOR YES/2 FOR NO)press  1 or 2 then  again again until program runs ususally takes 4 tries"<<endl;
        cin.ignore();
        cin>>w;
        if(w==1&& a==1)
                    {
                    cout<<"book borrowed please return book after 1 month "<<endl;

                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    cout << "issue Date: " << year << "-" << month << "-" << day+7 <<endl;
                    month+=1;
                    day+=7;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }
                    else if (w==1&& a==2){
                    cout<<"book borrowed please return book after 6 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    cout << "issue Date: " << year << "-" << month << "-" << day+7 <<endl;
                    month+=6;
                    day+=7;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }
                    else if (w==2)
                    cout<<"loan process cancelled"<<endl;
                    
                    else
                    cout<<"Book is not available AT THE LIBRARY of other institute"<<endl;
                    

                    
        


        
        }

        

         


       
        file1.close();
        
    }
    

   
};
class M {
private:
int i=0;   
string w,z,publication,rank,totalPaid,wordRate,daysToBePaid,paymentDifficulty,rank_totalPaid,rank_wordRate,rank_daysToBePaid,rank_paymentDifficulty;

public:
    
   
    
    void read2(const string& filename,int s)
    {    ifstream file2(filename);  
        if (!file2.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Enter Publication of Magazine you want to borrow (ENTER NAME OF PUBLICATION WITHIN QUOTATION MARKS):"<<endl;
        cin.ignore();
        getline(cin,z);
        
        

        string header;
        getline(file2, header);

        
        while (getline(file2,publication, ',') &&
               getline(file2,rank, ',') &&
               getline(file2,totalPaid, ',') &&
               getline(file2,wordRate, ',') &&
               getline(file2,daysToBePaid, ',') &&
               getline(file2,paymentDifficulty, ',') &&
               getline(file2,rank_totalPaid, ',') &&
               getline(file2,rank_wordRate, ',') &&
               getline(file2,rank_daysToBePaid, ',') &&
               getline(file2, rank_paymentDifficulty,'\n')) {
                
                if(z==publication)
                {
                    i=1;
                    std::ofstream outputFile("data.csv", std::ios::app);

    if (!outputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
        return ;
    }

   
    std::string p = publication;
 
    

   
    outputFile << p << endl;

   
    outputFile.close();

    std::cout << "Data inserted successfully." << std::endl;
                   
                    cout<<"Do you want to borrow this Magazine (TYPE Y FOR YES/N FOR NO)PRESS ENTER THEN Y THEN ENTER"<<endl;
                    cin.ignore();
                    cin>>w;
                    if (cin.peek() == '\n') {
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    if(w=="Y" && s==1){
                    cout<<"book borrowed please return book after 1 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    month+=1;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }
                    else if (w=="Y"&& s==2){
                        cout<<"book borrowed please return book after 6 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    month+=6;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }

                    
                    else
                    cout<<"Magazine not borrowed"<<endl;

                    }
                    
                
            
        }
        if(i==0)
                {    cout<<"Magazine is not present"<<endl;
                cout<<"Do you want to loan this Magazine (TYPE Y FOR YES/N FOR NO)PRESS ENTER THEN Y THEN ENTER"<<endl;
                    cin.ignore();
                    cin>>w;
                    if (cin.peek() == '\n') {
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    if(w=="Y" && s==1){
                    cout<<"book borrowed please return book after 1 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    cout << "issue Date: " << year << "-" << month << "-" << day <<endl;
                    month+=1;
                    day+=7;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }
                    else if (w=="Y"&& s==2){
                        cout<<"book borrowed please return book after 6 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    cout << "issue Date: " << year << "-" << month << "-" << day+7 <<endl;
                    month+=6;
                    day+=7;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }

                    
                    else
                    cout<<"Magazine not loaned borrowed"<<endl;
                }


       
        file2.close();
    }
    

   
};
class J:public Books,public M {
private:
int i=0;
   
string w,z,a,name;

public:
    void uq(){
       

 
    std::ifstream inputFile("data.csv"); 

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return ;
    }

    std::set<std::string> uniqueValues;
    std::string line;

    
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string value;

        
        while (std::getline(iss, value, ',')) {
            
            uniqueValues.insert(value);
        }
    }

    inputFile.close(); 

    cout << "Unique values in the CSV file:" << endl;

    
    for (const std::string& val : uniqueValues) {
        cout << val <<endl;
    }

    return ;


    }
    
   
    
    void read3(const string& filename,int s)
    {    ifstream file3(filename);  
        if (!file3.is_open()) {
            cout << "Failed to open file." << endl;
            
              
        }
        cout<<"Enter Journal you want to borrow : press enter 2 times"<<endl;
        cin.ignore();
        getline(cin,z);
        if (cin.peek() == '\n') {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
        

        
        
        while (getline(file3,name)) {
               
                if(z==name)
            
                {
                    i=1;
                    cout<<"Journal:"<<name<<endl;
                   
                    
                    cout<<"Journal is Available for borrow"<<endl;
                   
                    cout<<"Do you want to borrow this Journal (TYPE Y FOR YES/N FOR NO)";
                    cin>>w;
                    if(w=="Y")
                    cout<<" Journal is borrowed"<<endl;
                    else
                    cout<<"Journal is not borrowed"<<endl;

                    }
                
            
        }
        if(i==0)
                    {cout<<"Journal is not present"<<endl;
                    cout<<"do want to loan it";
                    cin.ignore();
                    cin>>w;
                    if (cin.peek() == '\n') {
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    if(w=="Y" && s==1){
                    cout<<"book borrowed please return book after 1 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    cout << "issue Date: " << year << "-" << month << "-" << day <<endl;
                    month+=1;
                    day+=7;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }
                    else if (w=="Y"&& s==2){
                        cout<<"book borrowed please return book after 6 month "<<endl;
                    time_t currentTime;
                    struct tm* localTimeInfo;
                    time(&currentTime);
                    localTimeInfo = localtime(&currentTime);

    
                    int year = localTimeInfo->tm_year + 1900; 
                    int month = localTimeInfo->tm_mon + 1;     
                    int day = localTimeInfo->tm_mday;          

    
                    cout << "Today's Date: " << year << "-" << month << "-" << day <<endl;
                    cout << "issue Date: " << year << "-" << month << "-" << day+7 <<endl;
                    month+=6;
                    day+=7;
                    cout<< "Return date"<<year<<"-"<<month<<"-"<<day<<endl;

                    }

                    
                    else
                    cout<<"Magazine not loaned borrowed"<<endl;
                    }

       
        file3.close();
    }
    

   
};


int main()
{
    cout<<"ARE YOU A REGISTERED USER (TYPE 1 FOR YES 2 FOR NO)"<<endl;
    int i;
    cin>>i;
    cout<<"ARE YOU STUDENT OR FACULTY TYPE 1 FOR STUDENT AND 2 FOR FACULTY";
    int y;
    cin>>y;
    
    if(i==1)
    {string password;
     cout<<"Enter Password";
     cin>>password;
     if(password=="1234")
     {  

    int x;
    J a;
    cout<<"Enter what you want to borrow (Type 1 for books 2 for magazines and 3 for journals):"<<endl;
    cin>>x;
    if(x==1)
    a.read1("books.csv",y);
    else if (x==2)
    a.read2("Magazines.csv",y);
    else if (x==3)
    a.read3("journals.csv",y);
    else
    cout<<"wrong option choosen";
     }
    }
    else if  (i==2)
    {
        string filename = "newreg.txt";

    
    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        exit; 
    }

    cout << "Enter your name then type , and write student if student and faculty if faculty  (type 'q' to quit):\n";

    string input;
    while (true) {
        getline(cin, input);

        if (input == "q") {
            break;
        }

        outputFile << input << endl;
    }

    
    outputFile.close();
    cout<<"Password is 1234"<<endl;

    cout << "Your registration is complete now press enter" << endl;
    getch();
    
    system("cls");
    string password;
    cout<<"Enter Password";
    cin>>password;
     if(password=="1234")
     {  

    int x;
    J a;
    cout<<"Enter what you want to borrow (Type 1 for books 2 for magazines and 3 for journals):"<<endl;
    cin>>x;
    if(x==1)
    a.read1("books.csv",y);
    else if (x==2)
    a.read2("Magazines.csv",y);
    else if (x==3)
    a.read3("journal.csv",y);
    else
    cout<<"wrong option choosen";
     }


    

        

    }



} 