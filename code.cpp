#include "incl.h"
FILE *f;int a;
main(int a,char **v){if(a>1){f=fopen (v[1],"rb");fseek(f,0,2);a=ftell(f);fclose(f);out(a);}}
