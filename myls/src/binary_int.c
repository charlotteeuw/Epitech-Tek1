/*
** EPITECH PROJECT, 2023
** binary_int
** File description:
** convert decimal to binary
*/

/*
void unsigned_int(int nb)
{
    char *temp[100];
    int i = 0;
    int j = 0;
    unsigned int k;

     if (my_isneg(nb) == 1)
       nb = nb * (-1);
    while (nb > 0) {
        temp[i] = 48 + (nb % 2);
        nb = nb / 2;
        i++;
    }
    for (j; temp[j] != '\0'; j++) {
        if (temp[j] == '1') {
            temp[j] = '0';
        }
        else {
            temp[j] = '1';
        }
    }
    if (temp[j] == '0')
        temp[j] = '1';
    else {
        while (temp[j - 1] != '0' && temp[j] != temp[0])
            j--;
        temp[j - 1] = '1';
    }
    my_revstr(temp);
    k = str_toint(temp);
    my_put_nbr(k);
}

int str_toint(char *str)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}
*/
