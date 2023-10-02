#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

class Books {
private:
int t=0;
int i;
string x,z,w,book_id, authors, original_title, title, language_code, image_url, small_image_url,goodreads_book_id,best_book_id, work_id, books_count, isbn, isbn13, original_publication_year,average_rating, ratings_count, work_ratings_count, work_text_reviews_count, ratings_1, ratings_2,ratings_3, ratings_4, ratings_5;

public:
    void read1(const string& filename)
    {    ifstream file1(filename);  
        if (!file1.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Enter Title or author/authors or ISBN  of Book you want to borrow :"<<endl;
        cin>>z;
        

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
                if(z==title|| z==authors || z==isbn)
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
                    
                    cout<<"Do you want to borrow this book (TYPE Y FOR YES/N FOR NO)";
                    cin>>w;
                    if(w=="Y")
                    cout<<"book borrowed please return book after 1 month if student 6 months if faculty"<<endl;
                    else
                    cout<<"book not borrowed"<<endl;
                    }
                    else
                    cout<<"Book is not available AT THE LIBRARY"<<endl;

                }
               
                

               

            
        }
        
        if(t==0)
        cout<<"Book is not the library"<<endl;

        cout<<"Do you want to suggest this book for if yes type 1 else 2"<<endl;
        cin>>i;
        if(i==1)
        {string filename = "newbooks.txt";

    
    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        exit; 
    }

    cout << "Enter data to write to the file (type 'q' to quit):\n";

    string input;
    while (true) {
        getline(cin, input);

        if (input == "q") {
            break;
        }

        outputFile << input << endl;
    }

    
    outputFile.close();

    cout << "Data has been written to the file." << endl;

         }


       
        file1.close();
        
    }
    

   
};
class M {
private:
int i=0;   
string w,z,publication,rank,totalPaid,wordRate,daysToBePaid,paymentDifficulty,rank_totalPaid,rank_wordRate,rank_daysToBePaid,rank_paymentDifficulty;

public:
    
   
    
    void read2(const string& filename)
    {    ifstream file2(filename);  
        if (!file2.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Enter Publication of Magazine you want to borrow :"<<endl;;
        cin>>z;
        

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
                    cout<<"Publication:"<<publication<<endl;
                    cout<<"rank :"<< rank<<endl;
                    cout<<"total paid:"<< totalPaid<<endl;
                    cout<<"word rate:"<< wordRate<<endl;
                    cout<<"days to be paid"<< daysToBePaid<<endl<<"payment difficulty:"<< paymentDifficulty<<endl<<"rank total paid"<< rank_totalPaid<<endl<<"rank word rate "<<rank_wordRate<<endl<<"rank days to be paid"<<rank_daysToBePaid<<endl<<"rank payment difficulty"<< rank_paymentDifficulty<<endl;

                    
                    cout<<"Magazine is Available for borrow"<<endl;
                   
                    cout<<"Do you want to borrow this Magazine (TYPE Y FOR YES/N FOR NO)";
                    cin>>w;
                    if(w=="Y")
                    cout<<"Magazine borrowed please return book after 1 month if student 6 months if faculty"<<endl;
                    else
                    cout<<"Magazine not borrowed"<<endl;

                    }
                    
                
            
        }
        if(i==0)
                    cout<<"Magazine is not present"<<endl;

       
        file2.close();
    }
    

   
};
class J:public Books,public M {
private:
int i;
   
string w,z,a,name,b,c;

public:
    
   
    
    void read3(const string& filename)
    {    ifstream file3(filename);  
        if (!file3.is_open()) {
            cout << "Failed to open file." << endl;
            
            return;  
        }
        cout<<"Enter Journal you want to borrow :"<<endl;;
        cin>>z;
        

        
        
        while (getline(file3,name, ',') &&
               getline(file3,b, ',') &&
               getline(file3, c,'\n')) {
                a=name+b+c;
                if(z==a)
                {
                    cout<<"Journal:"<<name<<b<<c<<endl;
                   
                    
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
                    cout<<"Journal is not present"<<endl;

       
        file3.close();
    }
    

   
};


int main()
{
    cout<<"ARE YOU A REGISTERED USER (TYPE 1 FOR YES 2 FOR NO)"<<endl;
    int i;
    cin>>i;
    if(i==1)
    {int x;
    J a;
    cout<<"Enter what you want to borrow (Type 1 for books 2 for magazines and 3 for journals):"<<endl;
    cin>>x;
    if(x==1)
    a.read1("books.csv");
    else if (x==2)
    a.read2("Magazines.csv");
    else if (x==3)
    a.read3("journal.csv");
    else
    cout<<"wrong option choosen";
    }
    else if  (i==2)
    {
        string filename = "newreg.txt";

    
    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        exit; 
    }

    cout << "Enter your name(use underscore for space in name if needed for last name) then type , and write student if student and faculty if faculty  (type 'q' to quit):\n";

    string input;
    while (true) {
        getline(cin, input);

        if (input == "q") {
            break;
        }

        outputFile << input << endl;
    }

    
    outputFile.close();

    cout << "Data has been written to the file now re run the program to enter and this time type 1." << endl;

        

    }



} 