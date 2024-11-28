#include<stdio.h>
#include<string.h>
enum hexcolor
{
    black=0x000000,
    red=0xFF0000,
    green=0x00FF00,
    blue=0x0000FF,
    white=0xFFFFFF,
    yellow=0xFFFF00,
    purple=0x800080,
};
void colorcode(enum hexcolor color)
{
    switch(color)
    {
        case black:printf("hexadecimal code of black clour is %x\n",color);       
                   break;
        case red:printf("hexadecimal code of red clour is %x\n",color);       
                 break;
        case green:printf("hexadecimal code of green clour is %x\n",color);       
                   break;
        case blue:printf("hexadecimal code of blue clour is %x\n",color);       
                  break;
        case white:printf("hexadecimal code of white clour is %x\n",color);       
                   break;
        case yellow:printf("hexadecimal code of yellow clour is %x\n",color);       
                    break;
        case purple:printf("hexadecimal code of purple clour is %x\n",color);       
                    break;
        default:printf("wrong option");
                break;                                 
    };
}
int main()
{
    
    colorcode(black);
    colorcode(red);
    colorcode(green);
    colorcode(blue);
    colorcode(white);
    colorcode(yellow);
    colorcode(purple);
    return 0;
    
    
    
}
   