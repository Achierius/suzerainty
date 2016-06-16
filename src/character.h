#ifndef __suz_character_h
#define __suz_character_h

#include <string>

#define __suz_NUM_ATTRIBUTES 2

class Character{
public:
  enum Attribute{
    Combat, Court 
  };

  enum class Gender{
    Male, Female
  };

  Character();
  
  unsigned int getAttribute(Attribute attributeName); 
  void setAttribute(Attribute attributeName, unsigned int value);
  void incrementAttribute(Attribute attributeName);
  void decrementAttribute(Attribute attributename);

  int getAge();
  void setAge(int newAge);
  void Age();
  
  Gender getGender();
  void setGender(Gender newGender);

  std::string getName();
  void setName(std::string newName);

private:
  
  int attributes[__suz_NUM_ATTRIBUTES];
  
  int age;

  Character::Gender gender;

  std::string name; 

};

#endif//__sov_character_h
