#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum TokenType {
    LEFT_PAREN,RIGHT_PAREN,
    LEFT_BRACE,RIGHT_BRACE,
    COMMA,DOT,MINUS,PLUS,
    SEMICOLON,SLASH,STAR,ADDRESS,

    STRING,INT,FLOAT,
    CONST,BOOL,
    CHAR,POINTER,

    NOT,NOT_EQUAL,
    EQUAL,DOUBLE_EQUAL,
    GREATER, GREATER_EQUAL,
    LESS, LESS_EQUAL,

    AND,CLASS,ELSE,
    FALSE,FUNCTION,FOR,
    IF,NULL_EMPTY,OR,
    OUT,RETURN,THIS,WHILE
};

class Token {

    public:
        TokenType type;
        string lexeme;
        int line;

        Token(TokenType token_type, string lex, int token_line) {
            type = token_type;
            lexeme = lex;
            line = token_line;
        }

        string to_string() {
            return type + " " + lexeme;
        }

    
};

void addToken(TokenType token)
{
    cout << "Token Added";
}

string next()
{
    return "\n";
}

void scanToken()
{
    string text = next();
    if (text == "(") {addToken(LEFT_PAREN);}
    else if (text == ")") {addToken(RIGHT_PAREN);}
    else if (text == "{") {addToken(LEFT_BRACE);}
    else if (text == "}") {addToken(RIGHT_BRACE);}
    else if (text == ",") {addToken(COMMA);}
    else if (text == ".") {addToken(DOT);}
    else if (text == "-") {addToken(MINUS);}
    else if (text == "+") {addToken(PLUS);}
    else if (text == ";") {addToken(SEMICOLON);}
    else if (text == "*") {addToken(STAR);}
    else if (text == "&") {addToken(ADDRESS);}
}

void scanSourceCode() 
{
    /* code */

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("ExampleSourceCode/program2.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText + "\n";
    }

    // Close the file
    MyReadFile.close();
}

int main(int argc, char const *argv[])
{
    /* code */
    scanSourceCode();
    return 0;
}
