#include "alu.h"

void ADD(int8_t Rd,int8_t Rr)
{
    R=Rd+Rr;//suma 2 registros
};

void SUB(int8_t Rd,int8_t Rr)
{
    R=Rd-Rr;//resta 2 registros
};

void INC(int8_t Rd)
{
    R=Rd+1;//incrementa el registro
};

void DEC(int8_t Rd)
{
    R=Rd-1;//decrementa el registro
};

void AND(int8_t Rd,int8_t Rr)
{
    R=Rd&Rr;//and entre los registros
};

void OR(int8_t Rd,int8_t Rr)
{
    R=Rd|Rr;//or entre los registros
};

void EOR(int8_t Rd,int8_t Rr)
{
    R=Rd^Rr;//xor entre los registros
};

void MOV(int8_t Rd, int8_t Rr)
{
    Rd=Rr;
};
