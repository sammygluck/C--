#include "../incl/Character.hpp"
#include "../incl/AMateria.hpp"
#include "../incl/Ice.hpp"
#include "../incl/Cure.hpp"
#include "../incl/ICharacter.hpp"
#include "../incl/MateriaSource.hpp"

int main(void) {

    //1. create a materia source inventory
    IMateriaSource *src = new MateriaSource();

    //2. create 2 amaterias
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();

    //3. learn the 2 amaterias
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice); //will not be learned as the source is full
  
    std::cout << std::endl;

    //4. create 2 characters
    ICharacter *bob = new Character("bob");
    ICharacter *jane = new Character("jane");

    //5. create amateria tmp and equip it to the character
    AMateria *tmp_0;
    AMateria *tmp_1;
    AMateria *tmp_2;
    AMateria *tmp_3;
    AMateria *tmp_4;
    

    //6. equip the tmp materia to the character
    tmp_0 = src->createMateria("fire"); //will not be created as it is not in the source
 
    std::cout << std::endl;
    tmp_0 = src->createMateria("ice");
    bob->equip(tmp_0); //will equip the ice materia to bob (idx 0)
    tmp_1 = src->createMateria("cure");
    bob->equip(tmp_1); //will equip the cure materia to bob (idx 1)
    tmp_2 = src->createMateria("ice");
    bob->equip(tmp_2); //will equip the ice materia to bob (idx 2)
    tmp_3 = src->createMateria("cure");
    bob->equip(tmp_3); //will equip the cure materia to bob (idx 3)
    tmp_4 = src->createMateria("ice");
    bob->equip(tmp_4); //will not be equipped as the inventory is full, will need to be freed here
    delete tmp_4;

    std::cout << std::endl;
    //7. use the materia on the character
    bob->use(0, *jane); //will use the ice materia on jane
    bob->use(1, *jane); //will use the cure materia on jane
    bob->use(2, *jane); //will use the ice materia on jane
    bob->use(3, *jane); //will use the cure materia on jane
    std::cout << std::endl;
    bob->use(4, *jane); //will not use anything as the index is invalid

    std::cout << std::endl;

    //8. copy the character
    ICharacter *bob_copy = new Character(*(Character *)bob);
    bob_copy->use(0, *jane); //will use the ice materia on jane
    bob_copy->use(1, *jane); //will use the cure materia on jane
    std::cout << std::endl;

    //9. unequip the materia from the character and free them
    bob->unequip(1); //unequip the cure materia from the inventory
    delete tmp_1; //free the cure materia

    bob->unequip(2); //unequip the ice materia from the inventory
    delete tmp_2; //free the ice materia

    //10. delete the characters
    delete bob;

    //10b. demonstrate that the copy is a deep copy
    std::cout << std::endl;
    bob_copy->use(0, *jane); //will use the ice materia on jane
    bob_copy->use(1, *jane); //will not use anything as the index is invalid

    //10c. delete jane and the copy
    delete jane;
    delete bob_copy;

    //11. delete the source and the amaterias
    delete src;

    delete ice;
    delete cure;

}

// int main()
// {
//     IMateriaSource *src = new MateriaSource();
//     AMateria *ice = new Ice();
//     AMateria *cure = new Cure();

//     src->learnMateria(ice);
//     src->learnMateria(cure);

//     ICharacter *me = new Character("me");

//     AMateria *tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter *bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;

//     delete ice;
//     delete cure;
// }
