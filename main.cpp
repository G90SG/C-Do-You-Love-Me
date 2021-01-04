#include <iostream>
using namespace std;

void love_me()
{
    char c;
    cout << endl << "Do you love me, answer y or n?: ";
    cin >> c;
    while (c != 'y' && c != 'n') {
        if (c!= 'n' && c!='y')
          cout << endl << "Invalid reply, try again. "<< endl;
          love_me();

    }  
    if (c == 'n') {
        cout << endl <<"I hate you ";
        
    }
    else if (c == 'y'){
        cout << endl << "I love you too!";
        

    }
}
int main()
{
    love_me();

  return 0;
}
