#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char *argv[])
{
    char *va =argv[1];
    printf(1,"\n Direccion fisica: %s",(char*) traducir(va));
    exit();
}