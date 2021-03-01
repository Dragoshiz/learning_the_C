
#include <unistd.h>

int main()
{
    int i = 0;
    char ch[10] = {'0','1','2','3','4','5','6','7','8','9'};

    while (i < 11)
    {
        write(1, &ch[i], 1);
        i++;
    }
}