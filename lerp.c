#include "lerp.h"

float lerp(float x, float x1, float x2, float y1, float y2)
{
    return y1 + (x - x1) * ((y2-y1) / (x2-x1));
}
