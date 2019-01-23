/*
** EPITECH PROJECT, 2018
** int size
** File description:
** return the number of digits of an int
*/

int int_size(int nbr)
{
    int i = 0;
    int mod_nbr = 10;
    int count = 0;

    if (nbr < 0)
        count += 1;
    while (i != nbr){
        count += 1;
        i = nbr % mod_nbr;
        mod_nbr *= 10;
    }
    return (count);
}
