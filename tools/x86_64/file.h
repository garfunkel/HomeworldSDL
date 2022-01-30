#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <Types.h>

sdword fileSave(char *_fileName, void *address, sdword length);
sdword fileExists(char *_fileName);
sdword fileSizeGet(char *_fileName, udword flags);
void * fileloadalloc(char *_fileName, int *length, udword flags);

