//
// Created by argoc on 10/30/22.
//

#include "Weapon.h"

std::string Weapon::getType() const {
    return _type;
}

void Weapon::setType(const std::string &type) {
    _type = type;
}

Weapon::Weapon() {

}

Weapon::Weapon(const std::string &type) : _type(type){

}

Weapon::~Weapon() {

}
