#include "Dot.h"

Dot operator-(const Dot &t, int z){
    return Dot((t.x - z), (t.y - z));
}
