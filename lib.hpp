#ifndef mylib
#define mylib
#include <iostream>
namespace edu{
    class classroom{
        private:
        int j = 40, k = 50, l = 90;
        public:
        int a;
        char* b;
        double c;
        classroom(int, char*, double);
        void look();
        int Sum();
    };
    // class students: public classroom {
    //     char Name[20];
    //     int marks, grade;
    // };
    extern void name(int);
    extern classroom show(classroom, classroom);
    extern void sum(int, int);
};
#include "lib.cpp"
#endif



