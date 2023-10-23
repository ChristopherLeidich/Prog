class AT{
    public:
        int GetError (void) { return 0; }
        void Doit (void) {} // private deprivation -> invisible
};

class BT : private AT{
    public:
        int GetError (void) {

        AT::GetError;
        
    return AT::GetError();
    }
};

int main () {
    BT b;
    
    int i = b.GetError(); // is accessible
}