#ifndef CLOCK_H
#define CLOCK_H


class clock
{
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const;
        void printTime() const;
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        bool equalTime(const time &) const;
    private:
        int hr;
        int min;
        int sec;

};

#endif // CLOCK_H
