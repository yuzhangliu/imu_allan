#include <iostream>
#include "type.h"

int main()
{
    Data* d = new Data();
    std::cout<< d->v << " "<< d->t<<std::endl;
    return 0;
}