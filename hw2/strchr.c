/* Portable version of strchr()
   This function is in the public domain.  */

/*

@deftypefn Supplemental char* strchr (const char *@var{s}, int @var{c})

Returns a pointer to the first occurrence of the character @var{c} in
the string @var{s}, or @code{NULL} if not found.  If @var{c} is itself the
null character, the results are undefined.

@end deftypefn

*/

#include <ansidecl.h>

/*
char *
strchr (register const char *s, int c)
{
  do {
    if (*s == c)
      {
	return (char*)s;
      }
  } while (*s++);
  return (0);
}
*/

//my func
/*
1 returns a pointer to the matched character or NULL
2 Using 'char' type because literals in C have the type int
3 Changing do while to while to avoid an iteration of the loop if the condition is not met. 
4 instead of casting int to char i just use char 
5 Using char instead of int to avoid memory waste. 
*/

char * strchr( const char s[], char c ) 
{
    while ( *s && *s != c ) ++s;

    return ( char * )( c == *s ? s : NULL );  
}
