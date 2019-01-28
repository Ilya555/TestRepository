#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
    private:
    unsigned int cars;
    double payment;
    public:
    tollBooth(): cars(0), payment(0)
    {}
    void payingCar()
    {
        cars +=1;
        payment += 0.5;
    }
    void nopayCar()
    {
        cars +=1;
    }
    void display()
    {
        cout << "Машины: " << cars << endl
        << "Платежи: " << payment << endl;
    }
};

int main()
{
    tollBooth booth;
    char esc = 27;
    char car_type = 'a';
    while (car_type != esc)
    {
        car_type = getche();
        switch(car_type)
        {
        case '1': booth.payingCar(); break;
        case '2': booth.nopayCar(); break;
        }
    }
    booth.display();
    return 0;
}