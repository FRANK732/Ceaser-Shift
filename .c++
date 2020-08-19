// ceaser shift
#include <iostream>
using namespace std;

int main()
{
    string  dash = "--------";
    // Declaring and initializing variables
    int NUMBER_OF_SHIFT = 0;
    char CHARACTERS[5] ;
    string RECIEVE_LETTERS ;
    string TO_DISPLAY_LETTERS = "";

    cout<< dash<< " CAESAR CIPHER SHIFT "<<dash<<"\n"<<endl;

    // Accept a number to indicate the amount of shift. 
    while (NUMBER_OF_SHIFT == 0)
    {

        cout << "Enter NUMBER of shift: ";
        cin >> NUMBER_OF_SHIFT;

    }
    // Accept 5 letters. (Plain text)
    cout << "Enter 5 LETTERS to Encrypt: ";
    cin >> RECIEVE_LETTERS;    
    
    for (int i = 0; i < RECIEVE_LETTERS.length(); i++)
    {
        CHARACTERS[i] = RECIEVE_LETTERS[i];
    }

    for (int i = 0; i < 5; i++)
    {
       TO_DISPLAY_LETTERS +=  CHARACTERS[i] + NUMBER_OF_SHIFT;
    }
    // Displaying the recieved and encrypted letters
    cout<< "\nPLAIN TEXT:\t"<<RECIEVE_LETTERS<<"\nCIPHER TEXT:\t"<<TO_DISPLAY_LETTERS<<endl;
}
