#include "Overloading.h"

MessageT::MessageT (const MessageT &msg_in) {

    if ( !(p = new char[strlen(msg_in.p) +1]) ) {
    // p=NULL kein Speicher
    return;
    }
        else {
        strcpy (p, msg_in.p);
        }
};