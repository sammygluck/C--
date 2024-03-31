#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materias[4];
        int _materiasCount;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        virtual ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &copy);

        virtual void learnMateria(AMateria *m);
        virtual AMateria *createMateria(std::string const & type);
};

#endif
