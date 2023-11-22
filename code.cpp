#include <stdio.h>
FILE *f;int a;
main(int a,char **v){if(a>1){f=fopen(v[1],"rb");fseek(f,0,2);a=ftell(f);fclose(f);printf("Size : %d\n",a);}}
