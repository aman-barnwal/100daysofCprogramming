#include <stdio.h>

struct Emp{int id;};

int main(){
    struct Emp e;
    FILE *fp = fopen("emp.bin","rb");
    fread(&e,sizeof(e),1,fp);
    printf("ID=%d\n",e.id);
    fclose(fp);
    return 0;
}

