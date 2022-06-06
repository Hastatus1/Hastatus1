 #include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int x,y,z=0; 
 
 for(y=1;y<=10;y++) {
 printf("Informe a idade: \n");
 scanf("%d",&x);
 if(x>=18)
 {z++; }
}
{printf("Maiores de idade: %d",z );}

    system("PAUSE");
    return EXIT_SUCCESS;
}