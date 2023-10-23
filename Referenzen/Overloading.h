#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class MessageT {
        char* p; // Zeiger auf den Text der Meldung
    
    public:
        MessageT (void);
        MessageT (char* p_in);
        MessageT (const MessageT &msg_in); // Kopierkonstr.
        ~MessageT (void);
        void Show (void);

        MessageT operator = (MessageT msg_in);

}

MessageT MessageT::operator = (const MessageT &msg_in) {

    if (p) {
    // erst mal aufraeumen
    delete [] p;
    }

    if ( !(p = new char[strlen(msg_in.p) +1]) ) {
    // p == NULL kein Speicher
        return *this;
    }
    
    else {
        strcpy(p,msg_in.p);
        return *this;
    }
}