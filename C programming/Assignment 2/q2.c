#include<stdio.h>
int main()
{
    char ch,convert;
    printf("Enter the Character: ");
    scanf(" %c", &ch); 

    if( ch>= 48 && ch <=58) 
    {
        printf("the character %c is a didgit with ascii value =%d",ch,ch);
    }
     else if (ch >=97 && ch<=122)
      {
        printf("the character %c is a lowercase alphabet with ascii value =%d\n",ch,ch);
        convert=ch-32;
        printf("the character %c is  converted to a Uppercase alphabet ' %c 'with ascii value = %d\n",ch,convert,convert);
    }
        
    else if (ch >=65 && ch<=90)
     {
        printf("the character %c is a uppercase alphabet with ascii value = %d\n",ch,ch);
        convert=ch+32;
        printf("the character %c is  converted to a lowercase alphabet ' %c 'with ascii value = %d\n",ch,convert,convert);
    }
   else if ((ch == ',') || (ch == '.') || (ch == ';') || (ch == ':') || (ch == '\'') || (ch == '\"') || 
         (ch == '?') || (ch == '/') || (ch == '!') || (ch == '-'))
{
    printf("The character '%c' is a Punctuation symbol with ASCII value = %d\n", ch, ch);
}

}
