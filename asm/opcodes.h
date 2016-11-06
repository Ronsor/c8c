#pragma once

#include "tree.h"

struct opcodes
{
    int (*assemble)(char* mnemonic, char* operand, struct node* tree);
};

extern const struct opcodes opcodes;
