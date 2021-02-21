#include <iostream>
using namespace std;
// Declaraing void function to hold the program
void love_me()
{
// Creating a Variable 'c' and assigning it 'char' variable type, which is a single character  
    char c;
// Asking the user if they love me
    cout << endl << "Do you love me, answer y or n?: ";
// Accepting input from the keyboard and assigning to variable 'c'
    cin >> c;
// While loop created to continually ask y or no question until either 'y' or 'n' are given    
    while (c != 'y' && c != 'n') {
// If the answer given isn't 'y' or 'n'
        if (c!= 'y' && c!='n')
// This output advises the user of an invalid entry, then calls the love_me() function to start again
// ** Error ** - if this invalid reply statement is called, but later the answer is 'y', it seems to jump back here and I can't suss out why
          cout << endl << "Invalid reply, try again. "<< endl;
          love_me();
    }  
// IF statement to check whether c == 'n' or 'y' and print an appropriate statement
    if (c == 'n') {
        cout << endl <<"I hate you ";        
    }
    else if (c == 'y'){
        cout << endl << "I love you too!";
    }
}
// Main function to call love_me()
int main()
{
// Calling love_me()
    love_me();

  return 0;
}
}
