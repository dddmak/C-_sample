#include <stdio.h>

int main(void)
{
    int buf[8];
    FILE *r_file,*w_file;
    
    r_file = fopen("test.dat","rb");
    w_file = fopen("test.csv","w");
    int x = 0;
    while(1){
        fread(buf,sizeof(int),4,r_file);
        if(buf[0] < 0)break;
        fprintf(w_file,"%d,%d,%d,%d\n",buf[0],buf[1],buf[2],buf[3]);
        x++;
    }
    fclose(r_file);
    fclose(w_file);
    
    return 0;
}
