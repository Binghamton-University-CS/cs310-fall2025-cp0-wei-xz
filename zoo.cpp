#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"

int main() {
	Animal animal("African Elephant", 1758);
   	AnimalsInZoo zooAnimal(animal);
	zooAnimal.display();
}

