#include "incl.h"
FILE *f;int a;
main(){f=fopen ("d.d", "rb");fseek(f, 0, 2);a=ftell(f);fclose (f);out(a);}
