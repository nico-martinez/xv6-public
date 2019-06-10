#include "types.h"
#include "stat.h"
#include "proc.h"

int main(int argc,char *argv[])
{
    char *va =argv[1];
    printf(1,"\n Direccion fisica: %u",traducir(va));
    exit();
}