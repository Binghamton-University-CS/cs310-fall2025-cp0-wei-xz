#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"

AnimalsInZoo::AnimalsInZoo(Animal a){
	animal = a;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
	animal = Animal();
}

void AnimalsInZoo::display(){
	std::cout << numAnimals << std::endl;
	if (numAnimals > 0){
		animal.display();
	}	
}
