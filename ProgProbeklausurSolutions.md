# Antworten

1. Aufagbe

        a) Eine vollständige Überdeckung ist Wenn alle Instanzen der Basis-Klasse sind Instanzen einer Abstrakten Klasse.

        b)Konkrete Klassen haben Instanzen Abstrakte nicht.

        c)

2. Aufgabe

        a)
        Falsch
        Falsch
        Richtig
        Richtig
        Richtig
        Falsch

        b)
        Richtig
        Falsch
        Richtig
        Richtig
        Richtig
1. Aufgabe

    a)

    ```cpp

    void func1(double x)(y = x)

    ```
    b)
    ```cpp
    class cls2 : public cls1{
        public:
            void func1(int i){y = (double)i/2;}
    }
    ```

1. Fehler Finden(Siehe Lösung für Teil 1)

        Das Programm Gibt bei Aufruf über den Pointer sp eine Ausgabe der Abgeleiteten Klasse Tanker und dannach der abgeleiten Klasse Uboot aus. 


```cpp
#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cerr;
using std::endl; using std::string;

size_t countOccurrences(char c, string &str)
{
    size_t count = 0;

    for (char i : str)
        if (i == c)
            count++;

    return count;
}

int main() {
    char ch1 = 'e';
    char ch2 = 'h';
    string str1("hello there, how are you doing?");
    string str2("Hello there! How are you doing?");

    cout << "number of char - '" << ch1 << "' occurrences = " << countOccurrences(ch1, str1) << endl;
    cout << "number of char - '" << ch2 << "' occurrences = " << countOccurrences(ch2, str2) << endl;

    exit(EXIT_SUCCESS);
}
```
