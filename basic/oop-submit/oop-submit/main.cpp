#include "Plane.h" 
bool Plane::operator<(const Plane& pln) {
    if(this->iSerialNumber < pln.getSerialNumber())
        return true;
    else
        return false;
}