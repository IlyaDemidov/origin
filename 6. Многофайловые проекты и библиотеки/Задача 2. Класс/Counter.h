#pragma once

class Counter
{
public:
    Counter();
    Counter(int x);
    void increment();
    void decrement();
    void print();
    void selection();
    void set_step();

private:
    int step;

};