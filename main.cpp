#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

enum class Genre {
    Fiction,
    Sciences,
    Biography,
    Mystery,
    order
};


///------------------------------ User Class ------------------------------//
class User {
    private:
    int id;
    string username;
    string password;
    Role role;


    public:
    user(int i, string u, string p, Role r) : id(i)
        username(u), password(p), role(r) {}

        int getID() const{
            string getUsername() {return username;}
            string getPassword() {return password;}
            Role getRole() {return role;}
        } 
 
        //------------------------------ BOOK CLASS ------------------------------//
class Book {
    private:
    int id;
    string title;
    string author;
    Genre genre;
    bool isBorrowed;

    public:
    Book(int i, string t, string a, Genre g) : id(i), title
    title() , author(a), genre(g), isBorrowed(false) {}
    int getID() const { 
        return id;
    }

    string getTitle() const { 
        return title; 
    }

    string getAuthor() const { 
        return author; 
    }

    Genre getGenre() const { 
        return genre; 
    }

    bool setAvabilability() const { 
        return isBorrowed; 
    }

    void setAvabilability(bool status) { 
        isBorrowed = status; 
    }
};    

//------BORRONW RECORD CLASS -------//
struct BorrowInfo {
    int BookID;
    int UserID;
    time_t borrowDate;
    time_t returnDate;
};