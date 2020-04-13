#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class vec3 {
    public:
        vec3(float e0, float e1, float e2) {
            e_[0] = e0;
            e_[1] = e1;
            e_[2] = e2;
        }

    private:
        float e_[3];
};