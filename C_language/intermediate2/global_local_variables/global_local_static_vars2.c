extern int var, number, test; /* faz a mencao a ATRIBUTES em outro arquivo*/

void result()
{
    printf("\nResult [in global_local_static_vars2] is %d\n\n", var + number + test);
}