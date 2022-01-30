//
// file.h
//

#ifndef _FILE_H
#define _FILE_H

#include <stdbool.h>

#include "types.h"

sdword fileSizeGet(char* filename);
bool fileLoad(char* filename, ubyte* data);

#endif
