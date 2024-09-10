#include <iostream>
using namespace std;

class Book {
    int BookId;
    int Pages;
    int Prices;
    
    public:
        void setBook(int b,int p, int pr ){
            BookId=b;
            Pages=p;
            Prices=pr;
            
        }
        int getBookId(){
            return BookId;
        }
        int getPages(){
            return Pages;
        }
        int getPrices(){
            return Prices;
        }
        
        void showBookDetails(){
            cout<<"Book ID :"<<BookId<<endl;
            cout<<"Pages   :"<<Pages<<endl;
            cout<<"Prices  :"<<Prices<<endl;
            
        }
        
};
int main(){
    Book *book1 = new Book;
    book1->setBook(250,560,950);
    book1->showBookDetails();
    
    Book *book2 = new Book;
    book2->setBook(270,580,1050);
    book2->showBookDetails();
    
    if(book1->getPrices() > book2->getPrices()){
        cout<<"Book 1 has more price: "<<book1->getPrices()<<endl;
        
    }
    else{
        cout<<"Book 2 has more price: "<<book2->getPrices()<<endl;
    }
    
    return 0;
}