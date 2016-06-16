#include "character.h"

Character::Character(){
  this->setAge(0);
  this->setName("bob");
  this->setGender(Character::Gender::Male);
  for(int i = 0; i < __suz_NUM_ATTRIBUTES; i++){
    this->setAttribute((Character::Attribute)i, 0);
  }
}


unsigned int Character::getAttribute(Attribute attributeName){
  return attributes[attributeName];
}
void Character::setAttribute(Attribute attributeName, unsigned int value){
  attributes[attributeName] = value;
}
void Character::incrementAttribute(Attribute attributeName){
  attributes[attributeName]++;
}
void Character::decrementAttribute(Attribute attributeName){
  attributes[attributeName]--;
}

int Character::getAge(){return age;}
void Character::setAge(int newAge){age = newAge;}
void Character::Age(){age++;}
  
Character::Gender Character::getGender(){return gender;}
void Character::setGender(Gender newGender){gender = newGender;}

std::string Character::getName(){return name;}
void Character::setName(std::string newName){name = newName;}

