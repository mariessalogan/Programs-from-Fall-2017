#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>

class Patron;

enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};
class Book
{
  private:
    std::string idCode;
    std::string title;
    std::string author;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
    static const int CHECK_OUT_LENGTH = 21;
  public:
    Book(std::string idc, std::string t, std::string a);
    int getCheckOutLength();
    std::string getIdCode();
    std::string getTitle();
    std::string getAuthor();
    Locale getLocation();
    void setLocation(Locale);
    Patron* getCheckedOutBy();
    void setCheckedOutBy(Patron*);
    Patron* getRequestedBy();
    void setRequestedBy(Patron*);
    int getDateCheckedOut();
    void setDateCheckedOut(int);
};
#endif
