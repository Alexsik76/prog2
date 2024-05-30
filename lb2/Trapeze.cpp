#include "Trapeze.h"


Trapeze operator-(const Trapeze &t, int z){
    return Trapeze((t.d_a - z), (t.d_b - z), (t.d_c - z), (t.d_d - z));
}