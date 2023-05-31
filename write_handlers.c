#include "main.h"
<<<<<<< HEAD
=======


>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
/**
 * handle_write_char - A function that prints a string
 * @c: char types.
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags.
 * @size: Size specifier
 * @precision: precision specifier
 * @width: get width.
 *
 * Return: Number of chars printed.
 */
<<<<<<< HEAD
=======

>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
int handle_write_char(char c, char buffer[],
int flags, int width, int precision, int size)
{ /* char is stored at left and paddind at buffer's right */
int k = 0;
char padd = ' ';
<<<<<<< HEAD
UNUSED(precision);
UNUSED(size);
if (flags & F_ZERO)
padd = '0';
buffer[k++] = c;
buffer[k] = '\0';
if (width > 1)
{
buffer[BUFF_SIZE - 1] = '\0';
for (k = 0; k < width - 1; k++)
buffer[BUFF_SIZE - k - 2] = padd;
if (flags & F_MINUS)
return (write(1, &buffer[0], 1) +
write(1, &buffer[BUFF_SIZE - k - 1], width - 1));
else
return (write(1, &buffer[BUFF_SIZE - k - 1], width - 1) +
write(1, &buffer[0], 1));
}
   return (write(1, &buffer[0], 1));
}
=======

UNUSED(precision);
UNUSED(size);

if (flags & F_ZERO)
    padd = '0';

        buffer[k++] = c;
        buffer[k] = '\0';

        if (width > 1)
        {
                buffer[BUFF_SIZE - 1] = '\0';
                for (k = 0; k < width - 1; k++)
                        buffer[BUFF_SIZE - k - 2] = padd;

                if (flags & F_MINUS)
                        return (write(1, &buffer[0], 1) +
                                write(1, &buffer[BUFF_SIZE - k - 1], width - 1));
                else
                        return (write(1, &buffer[BUFF_SIZE - k - 1], width - 1) +
                                        write(1, &buffer[0], 1));
        }

        return (write(1, &buffer[0], 1));
}

>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
/************************* WRITE NUMBER *************************/
/**
 * write_number - A fuction that prints a string
 * @is_negative: Lista of arguments
 * @ind: char types.
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @size: Size specifier
 * @precision: precision specifier
 * @width: get width.
 *
 * Return: Number of chars printed.
 */
<<<<<<< HEAD
int write_number(int is_negative, int ind, char buffer[],
int flags, int width, int precision, int size)
{
int length = BUFF_SIZE - ind - 1;
char padd = ' ', extra_ch = 0;
UNUSED(size);
if ((flags & F_ZERO) && !(flags & F_MINUS))length, padd, extra_ch));
}
/**
 * write_num - Write a number using a bufffer
=======

int write_number(int is_negative, int ind, char buffer[],
        int flags, int width, int precision, int size)
{
        int length = BUFF_SIZE - ind - 1;
        char padd = ' ', extra_ch = 0;

        UNUSED(size);

        if ((flags & F_ZERO) && !(flags & F_MINUS))
                padd = '0';
        if (is_negative)
                extra_ch = '-';
        else if (flags & F_PLUS)
                extra_ch = '+';
        else if (flags & F_SPACE)
          extra_ch = ' ';

        return (write_num(ind, buffer, flags, width, precision,
                length, padd, extra_ch));
}

/**
 * write_num - A function that write a number using a bufffer
>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
 * @ind: Index at which the number starts on the buffer
 * @buffer: Buffer
 * @flags: Flags
 * @width: width
 * @prec: Precision specifier
 * @length: Number length
 * @padd: Pading char
 * @extra_c: Extra char
 *
 * Return: Number of printed chars.
 */
int write_num(int ind, char buffer[],
<<<<<<< HEAD
int flags, int width, int prec,
int length, char padd, char extra_c)
{
int i, padd_start = 1;
if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0' && width == 0)
return (0); /* printf(".0d", 0)  no char is printed */
if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
buffer[ind] = padd = ' '; /* width is displayed with padding ' ' */
if (prec > 0 && prec < length)
padd = ' ';
while (prec > length)
buffer[--ind] = '0', length++;
if (extra_c != 0)
length++;
if (width > length)
{
for (i = 1; i < width - length + 1; i++)
buffer[i] = padd;
buffer[i] = '\0';
    if (flags & F_MINUS && padd == ' ')/* Asign extra char to left of buffer */
{
if (extra_c)
buffer[--ind] = extra_c;
return (write(1, &buffer[ind], length) + write(1, &buffer[1], i - 1));
}
else if (!(flags & F_MINUS) && padd == ' ')/* extra char to left of buff */
{
if (extra_c)
buffer[--ind] = extra_c;
return (write(1, &buffer[1], i - 1) + write(1, &buffer[ind], length));
}
else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of padd */
{
if (extra_c)
buffer[--padd_start] = extra_c;
return (write(1, &buffer[padd_start], i - padd_start) +
write(1, &buffer[ind], length - (1 - padd_start)));
}
}
if (extra_c)
buffer[--ind] = extra_c;
return (write(1, &buffer[ind], length));
}
=======
        int flags, int width, int prec,
        int length, char padd, char extra_c)
{
        int k, padd_start = 1;

        if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0' && width == 0)
                return (0); /* printf(".0d", 0)  no char is printed */
        if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
                buffer[ind] = padd = ' '; /* width is displayed with padding ' ' */
        if (prec > 0 && prec < length)
                padd = ' ';
        while (prec > length)
                buffer[--ind] = '0', length++;
        if (extra_c != 0)
                length++;
        if (width > length)
        {
                for (k = 1; k < width - length + 1; k++)
                     buffer[k] = padd;
                buffer[k] = '\0';
                if (flags & F_MINUS && padd == ' ')/* Asign extra char to left of 

buffer */
                {
                        if (extra_c)
                                buffer[--ind] = extra_c;
                        return (write(1, &buffer[ind], length) + write(1, &buffer

[1], i - 1));
                }
                else if (!(flags & F_MINUS) && padd == ' ')/* extra char to left of 

buff */
                {
                        if (extra_c)
                                buffer[--ind] = extra_c;
                        return (write(1, &buffer[1], i - 1) + write(1, &buffer[ind], 

length));
                }
                else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of 

padd */
                {
                        if (extra_c)
                                buffer[--padd_start] = extra_c;
                        return (write(1, &buffer[padd_start], k - padd_start) +
                                write(1, &buffer[ind], length - (1 - padd_start)));
                }
        }
        if (extra_c)
                buffer[--ind] = extra_c;
        return (write(1, &buffer[ind], length));
}

>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
/**
 * write_unsgnd - Writes an unsigned number
 * @is_negative: Number indicating if the num is negative
 * @ind: Index at which the number starts in the buffer
 * @buffer: Array of chars
 * @flags: Flags specifiers
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 *
<<<<<<< HEAD
  * Return: Number of written chars.
 */
int write_unsgnd(int is_negative, int ind,
char buffer[],
int flags, int width, int precision, int size)
{
/* The number is stored at the bufer's right and starts at position i */
int length = BUFF_SIZE - ind - 1, k = 0;
char padd = ' ';
UNUSED(is_negative);
UNUSED(size);
if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
return (0); /* printf(".0d", 0)  no char is printed */
if (precision > 0 && precision < length)
padd = ' ';
while (precision > length)
{
buffer[--ind] = '0';
length++;
}
if ((flags & F_ZERO) && !(flags & F_MINUS))
padd = '0';
if (width > length)
{
for (k = 0; k < width - length; k++)
buffer[k] = padd;
buffer[k] = '\0';
if (flags & F_MINUS) /* Asign extra char to left of buffer[buffer>padd]*/
{
return (write(1, &buffer[ind], length) + write(1, &buffer[0], k));
}
}
else /* Asign extra char to left of padding [padd>buffer]*/
{
    return (write(1, &buffer[0], k) + write(1, &buffer[ind], length));
}
}
return (write(1, &buffer[ind], length));
}
=======
 * Return: Number of written chars.
 */
int write_unsgnd(int is_negative, int ind,
        char buffer[],
        int flags, int width, int precision, int size)
{
        /* The number is stored at the bufer's right and starts at position i */
        int length = BUFF_SIZE - ind - 1, k = 0;
        char padd = ' ';

        UNUSED(is_negative);
        UNUSED(size);

        if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
                return (0); /* printf(".0d", 0)  no char is printed */

        if (precision > 0 && precision < length)
                padd = ' ';

        while (precision > length)
        {
                buffer[--ind] = '0';
                length++;
        }

        if ((flags & F_ZERO) && !(flags & F_MINUS))
                padd = '0';

        if (width > length)
        {
                for (k = 0; k < width - length; k++)
                        buffer[k] = padd;

                buffer[k] = '\0';

                if (flags & F_MINUS) /* Asign extra char to left of buffer 

[buffer>padd]*/
                {
                        return (write(1, &buffer[ind], length) + write(1, &buffer

[0], k));
                }
   }
                else /* Asign extra char to left of padding [padd>buffer]*/
                {
                        return (write(1, &buffer[0], k) + write(1, &buffer[ind], 

length));
                }
        }

        return (write(1, &buffer[ind], length));
}

>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
/**
 * write_pointer - Write a memory address
 * @buffer: Arrays of chars
 * @ind: Index at which the number starts in the buffer
 * @length: Length of number
 * @width: Wwidth specifier
 * @flags: Flags specifier
 * @padd: Char representing the padding
 * @extra_c: Char representing extra char
 * @padd_start: Index at which padding should start
 *
 * Return: Number of written chars.
 */
int write_pointer(char buffer[], int ind, int length,
<<<<<<< HEAD
int width, int flags, char padd, char extra_c, int padd_start)
{
if (width > length)
{
for (i = 3; i < width - length + 3; i++)
buffer[i] = padd;
buffer[i] = '\0';
if (flags & F_MINUS && padd == ' ')/* Asign extra char to left of buffer
*/
{
buffer[--ind] = 'x';
buffer[--ind] = '0';
if (extra_c)
buffer[--ind] = extra_c;
return (write(1, &buffer[ind], length) + write(1, &buffer[3], k - 3));
}
else if (!(flags & F_MINUS) && padd == ' ')/* extra char to left of buffer
*/
{
buffer[--ind] = 'x';
buffer[--ind] = '0';
if (extra_c)
buffer[--ind] = extra_c;
return (write(1, &buffer[3], k - 3) + write(1, &buffer[ind], length));
}
else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of padd
*/
{
if (extra_c)
buffer[--padd_start] = extra_c;
buffer[1] = '0';
buffer[2] = 'x';
return (write(1, &buffer[padd_start], k - padd_start) +
write(1, &buffer[ind], length - (1 - padd_start) - 2));
}
}
buffer[--ind] = 'x';
buffer[--ind] = '0';
if (extra_c)
buffer[--ind] = extra_c;
return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
}
else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of padd
*/   
padd = '0';
if (is_negative)
extra_ch = '-';
else if (flags & F_PLUS)
extra_ch = '+';
else if (flags & F_SPACE)
extra_ch = ' ';
return (write_num(ind, buffer, flags, width, precision,
} 
=======
        int width, int flags, char padd, char extra_c, int padd_start)
{
        int k;

        if (width > length)
        {
                for (k = 3; k < width - length + 3; k++)
                        buffer[i] = padd;
                buffer[k] = '\0';
                if (flags & F_MINUS && padd == ' ')/* Asign extra char to left of 

buffer */
                {
                        buffer[--ind] = 'x';
                        buffer[--ind] = '0';
                        if (extra_c)
                     buffer[--ind] = extra_c;
                        return (write(1, &buffer[ind], length) + write(1, &buffer

[3], k - 3));
                }
                else if (!(flags & F_MINUS) && padd == ' ')/* extra char to left of 

buffer */
                {
                        buffer[--ind] = 'x';
                        buffer[--ind] = '0';
                        if (extra_c)
                                buffer[--ind] = extra_c;
                        return (write(1, &buffer[3], k - 3) + write(1, &buffer[ind], 

length));
                }
                else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of 

padd */
                {
                        if (extra_c)
                                buffer[--padd_start] = extra_c;
                        buffer[1] = '0';
                        buffer[2] = 'x';
                        return (write(1, &buffer[padd_start], k - padd_start) +
                                write(1, &buffer[ind], length - (1 - padd_start) - 

2));
                }
        }
        buffer[--ind] = 'x';
        buffer[--ind] = '0';
        if (extra_c)
                buffer[--ind] = extra_c;
        return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
}
                         
>>>>>>> 28a5fad138f678e7a316f25553ce9e17d0638078
