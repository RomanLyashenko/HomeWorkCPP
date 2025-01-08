#include <iostream>
#include "Cat.h"
#include "Parrot.h"
#include "Dog.h"

using namespace std;

int main()
{
    Parrot pet("John", "parrot", 10);
    pet.print();
}