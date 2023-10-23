#include <string>
#include <sstream>
#include <iostream>

using namespace std;

void convertToASCII(string letter)
{
    int ges = 0;
    for (int i = 0; i < letter.length(); i++)
        {
            char x = letter.at(i);
            
            ges += int(x);
            cout << "Zwischenergebniss: "<<int(x) << endl;
        }
        cout << "Value: " << ges << endl;
}

int main()
{
    string plainText;

    cout << "Enter text to convert to ASCII: ";

    getline(cin, plainText);

    convertToASCII(plainText);

    return 0;
}