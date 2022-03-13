#include "main.h"

/**
 * _get_functions - function that selects the correct function
 * @func: pointer
 * Return: always
 */
int (*_get_functions(const char *format))(va_list list)
{
    op_t op[] = {
        {"c", _printf_c},
        {"s", _printf_s},
        {"d", _printf_d_i},
        {"i", _printf_d_i},
        {"u", _printf_u},
        {"r", _printf_r},
        {"R", _printf_13},
        {"x", _printf_x},
        {"X", _printf_X},
        {"o", _printf_o},
        {"b", _printf_b},
        {"p", _printf_p},
        {"h", _printf_h},
        {"%", _printf_por},
        {NULL, NULL}
    };

    int i = 0;

    while (op[i].func != NULL)
    {
        if (format[0] == op[i].func[0])
            return (op[i].f);
        i++;
    }
    return (0);
}
