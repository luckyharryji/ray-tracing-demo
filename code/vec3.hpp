#ifndef __VEC3_H__
#define __VEC3_H__

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

        float& operator[] (int index) {
            if (index > 2) {
                throw std::runtime_error(
                    "index out of bound, only care about 3-dimension for now");
            }
            return e_[index];
        }

    private:
        float e_[3];
};

#endif