#include <string>

using namespace std;

class Accaunt
{
    public:
        Accaunt( int );
        void setBalans( int );
        void credit( int );
        void debit( int );
        int getBalans();
    private:
        int bal;
};
