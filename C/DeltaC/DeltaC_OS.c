#include <stdio.h>

#include "../DeltaC/DeltaC_console.h"

void DeltaC_OS_detect()
{
    DeltaC_print("Detectando sistema operacional...");
#ifdef __CYGWIN__
    DeltaC_print("Usuario(a) de Ruindows abandone esse barco.");
#elif __linux__
    DeltaC_print("");
#elif __MACH__
    DeltaC_print("");
#elif __unix__
    DeltaC_print("");
#elif __FreeBSD__
    DeltaC_print("");
#elif __ANDROID__
    DeltaC_print("");
#endif
}