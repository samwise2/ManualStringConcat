//
//  main.c
//  manual strcat
//
//  Created by Sam Orend on 2019-11-22.
//  Copyright © 2019 Sam Orend. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void myStrcat(char *s0, const char *s1)
{
    int starter = strlen(s0);
    for(int i=starter;i<=strlen(s1)+starter;i++)
    {
        if(i==strlen(s1)+starter)
        {
            s0[i] = 0;
            break;
        }
        s0[i] = s1[i-starter];
    }
}

int main() {
    char a[12] = "hello";
    char b[] = "yo";
    myStrcat(a,b);
    printf("%s\n",a);
    
    return 0;
}
