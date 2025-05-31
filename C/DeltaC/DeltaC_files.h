#ifndef DeltaC_files_h_
#define DeltaC_files_h_

#include <stdio.h>

FILE *DeltaC_openfile(char *file_name, char *mode);
int DeltaC_get_lines_file(FILE *file);

#endif