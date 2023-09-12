#include <unistd.h>
/**
 * main - We will print using _putchar
 * Return: 0 (success)
 **/
int main(void){
int _putchar(char c)
{
return (write(1, &c, 1));
}
return(0);
}
