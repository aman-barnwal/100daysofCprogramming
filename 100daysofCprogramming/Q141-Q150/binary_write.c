#include <stdio.h>

struct Emp{int id;};

int main(){
    struct Emp e = {101};
    FILE *fp = fopen("emp.bin","wb");
    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);
    return 0;
}

