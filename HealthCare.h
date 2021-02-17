#include <string>
using namespace std;

class HealthCare
{
public:
    HealthCare(string, string, string, int, int, int, int, int);
    void setName(string);
    string getName();
    void setSurname(string);
    string getSurname();
    void setSex(string);
    string getSex();
    void setDay(int);
    int getDay();
    void setMonth(int);
    int getMonth();
    void setyear(int);
    int getYear();
    void setWeight(int);
    int getWeight();
    void setHeight(int);
    int getHeight();
    void setInfo();
    void getInfo();
private:
        string name;
        string surname;
        string sex;
        int day;
        int month;
        int year;
        int weight;
        int height;
};
