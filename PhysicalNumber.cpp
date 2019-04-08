#include <iostream>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace ariel;

PhysicalNumber PhysicalNumber::operator+   (const PhysicalNumber& a ) const{
    return NULL;
} // +A
PhysicalNumber PhysicalNumber::operator-   (const PhysicalNumber& a ) const{
    return NULL;
}
PhysicalNumber& PhysicalNumber::operator++  () {
    return NULL;
}
PhysicalNumber& PhysicalNumber::operator--  () {
    return NULL;
}
PhysicalNumber& PhysicalNumber::operator+=        (const PhysicalNumber& a ){
    return NULL;
}
PhysicalNumber PhysicalNumber::operator+() const {
    return NULL;
} // +A
PhysicalNumber& PhysicalNumber::operator-= (const PhysicalNumber& a ){
    return NULL;
} // A = A-B
PhysicalNumber PhysicalNumber::operator-() const {
    return NULL;
} // -A


bool PhysicalNumber::operator<  (const PhysicalNumber a) const{
    return false;
}
bool PhysicalNumber::operator<= (const PhysicalNumber a)const{
    return false;
}
bool PhysicalNumber::operator>= (const PhysicalNumber a)const{
    return false;
}
bool PhysicalNumber::operator>  (const PhysicalNumber a)const{
    return false;
}
bool PhysicalNumber::operator== (const PhysicalNumber a)const{
    return false;
}
bool PhysicalNumber::operator!= (const PhysicalNumber a) const{
    return false;
}


std::ostream& ariel::operator<< (ostream& a, const PhysicalNumber& b){
    
}
std::istream& ariel::operator>> (istream& a, const PhysicalNumber& b){

} 

// int main(){
//     cout << "hi";
//     return 0;
// }
