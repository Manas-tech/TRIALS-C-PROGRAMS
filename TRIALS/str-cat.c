//For the cases when one string has to be appended at the end of another string, this function is being used
#include<string.h>

int main()

{
char src[20]= "before";

char dest[20]= "after";

strcat(dest, src);

puts(dest);

return 0;

}