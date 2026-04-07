#include <iostream>

using namespace std;

class Event
{

    int day, month, year;
    int hour, minutes;
    string name;


    public: //No bo chcemy je wywo³ywaæ z maina

    Event(string = "brak", int = 1, int = 1, int = 1, int = 1, int = 1);
    ~Event();
    void load();
    void show();
};
