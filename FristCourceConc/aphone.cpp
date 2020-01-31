#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    public:
        void set_name_surname_score(int w) {
            width = w;
        }

        void set_group_students(int h) {
            height = h;
        }

    protected:
        vector<string> name_surname_score = { "Gevorg", "Poghosyan", "40" };
        int group_students = 15;
};