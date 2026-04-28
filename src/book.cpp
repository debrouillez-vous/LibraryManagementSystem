// Book class implementation

class Book {
public:
    // Constructor
    Book();

    // Destructor
    ~Book();

    // Method to get the title of the book
    std::string getTitle();

    // Method to set the title of the book
    void setTitle(const std::string& title);

    // Method to get the author of the book
    std::string getAuthor();

    // Method to set the author of the book
    void setAuthor(const std::string& author);

    // Method to get the publication year of the book
    int getPublicationYear();

    // Method to set the publication year of the book
    void setPublicationYear(int year);

    // Method to display book information
    void displayInfo();
};
