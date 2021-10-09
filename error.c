#include <stdio.h>

char* errcode(int x)
{
    switch (x)
    {
        case 100:
            return "continue";
            break;
        case 101:
            return "switching protocols";
            break;
        case 102:
            return "processing";
            break;
        case 200:
            return "OK";
            break;
        case 201:
            return "Created";
            break;
        
        case 202:
            return "Accepted";
            break;
        case 203:
            return "Non-Authoritive information";
            break;
        case 204:
            return "No Content";
            break;
        
        case 404:
            return "error";
            break;
        
        default:
            return 0;
            break;
    }
}

int main()
{
    char* x = errcode(200);
    char** y = &x;
    printf("%p\n",y);
    //printf("%s\n",errcode(200));
}