#include "../incl/MateriaSource.hpp"
#include "../incl/AMateria.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    this->_materiasCount = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._materias[i])
            this->_materias[i] = copy._materias[i]->clone();
        else
            this->_materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i])
                delete this->_materias[i];
            if (copy._materias[i])
                this->_materias[i] = copy._materias[i]->clone();
            else
                this->_materias[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->_materiasCount < 4)
    {
        this->_materias[this->_materiasCount] = m;
        this->_materiasCount++; //where does it get deleted/decremented?
    }
    else
    {
        std::cout << "MateriaSource is full" << std::endl;
        delete m;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
            return (this->_materias[i]->clone());
    }
    std::cout << "Unknown materia type" << std::endl;
    return (NULL);
}

