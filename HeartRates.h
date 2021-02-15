#include <string>
using namespace std;

class HartRates
{
    public:
        HartRates(string, string, int, int, int);
        void setName(string);
        string getName();
        void setSurname(string);
        string getSurname();
        void setDay(int);
        int getDay();
        void setMonth(int);
        int getMonth();
        void setYear(int);
        int getYear();
        int getAge();
        int getMaxHeartRate();
        int getTargetHeartRate();
    private:
        string name;
        string surname;
        int day;
        int month;
        int year;
};
