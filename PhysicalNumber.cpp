#include <iostream>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace ariel;

PhysicalNumber PhysicalNumber::operator+   (const PhysicalNumber& a ) const{} // +A
PhysicalNumber PhysicalNumber::operator-   (const PhysicalNumber& a ) const{}
PhysicalNumber& PhysicalNumber::operator++  () {}
PhysicalNumber& PhysicalNumber::operator--  () {}
PhysicalNumber& PhysicalNumber::operator+=        (const PhysicalNumber& a ){}
PhysicalNumber PhysicalNumber::operator+() const {} // +A
PhysicalNumber& PhysicalNumber::operator-=        (const PhysicalNumber& a ){} // A = A-B
PhysicalNumber PhysicalNumber::operator-() const {} // -A


bool PhysicalNumber::operator<  (const PhysicalNumber a) const{}
bool PhysicalNumber::operator<= (const PhysicalNumber a)const{}
bool PhysicalNumber::operator>= (const PhysicalNumber a)const{}
bool PhysicalNumber::operator>  (const PhysicalNumber a)const{}
bool PhysicalNumber::operator== (const PhysicalNumber a)const{}
bool PhysicalNumber::operator!= (const PhysicalNumber a) const{}


std::ostream& ariel::operator<< (ostream& a, const PhysicalNumber& b){}
std::istream& ariel::operator>> (istream& a, const PhysicalNumber& b){} 