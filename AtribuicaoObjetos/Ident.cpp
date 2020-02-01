#include <iostream>
#include "Ident.h"
using namespace std;

Ident::Ident(char *Nome)
{
    this->Nome = (char *)malloc(strlen(Nome) + 1);
    strcpy(this->Nome, Nome);
}