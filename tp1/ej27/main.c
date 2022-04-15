#include "../Cadenas/Cadenas.h"
#include <stdio.h>
#include <string.h>
int main()
{
    char vec[] = "ligar es ser       agil";
    char vec2[] = "no soy palindromo";
    char vec3[] ="reconocer";
    char vec4[] =" hol";



    if(esPalindromo(vec))
    {
        printf("%s es palindromo\n",vec);
    }
    else
    {
        printf("%s no es palindromo\n",vec);
    }
     if(esPalindromo(vec3))
    {
        printf("%s es palindromo\n",vec3);
    }
    else
    {
        printf("%s no es palindromo\n",vec3);
    }
         if(esPalindromo(vec4))
    {
        printf("%s es palindromo\n",vec4);
    }
    else
    {
        printf("%s no es palindromo\n",vec4);
    }
        if(esPalindromo(vec2))
    {
        printf("%s es palindromo\n",vec2);
    }
    else
    {
        printf("%s no es palindromo\n",vec2);
    }

    return 0;
}
