#pragma once

#include <string>
#include <ctime>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    std::string isbn;
    bool status;
    std::time_t borrowDate;

public:
    // Constructor
    Book(int id, const std::string &title, const std::string &author, const std::string &isbn)
        : id(id), title(title), author(author), isbn(isbn), status(true), borrowDate(0) {}

    // Getters
    int getId() const { return id; }
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getIsbn() const { return isbn; }
    bool getStatus() const { return status; }
    std::time_t getBorrowDate() const { return borrowDate; }

    // Setters
    void setId(int id) { this->id = id; }
    void setTitle(const std::string &title) { this->title = title; }
    void setAuthor(const std::string &author) { this->author = author; }
    void setIsbn(const std::string &isbn) { this->isbn = isbn; }
    void setStatus(bool status) { this->status = status; }
    void setBorrowDate(std::time_t date) { borrowDate = date; }

    // Method to check if the book is available
    bool isAvailable() const { return status; }
};
