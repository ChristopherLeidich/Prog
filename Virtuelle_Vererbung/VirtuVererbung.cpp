class AT {
    int i, j, k;
public:
    void Doit (void);
    //void Doit (const char* str){};
};

class BT : public AT {
    double x, y;
public:
   void Calculate (double arg1, int arg2);
};

class CT : public AT{
    char *z;
public:
   // void Doit(){int a = 3;}
};

class DT : public BT, public CT {
    int u, v;
};

int main(){
    DT d;

    //d.Doit();
    d.Doit();

    return ;
}