int b, c; // file scope, static.

void f(void)
{
    int b, d; // block scope, automatic. b was first file scope until declared here.
}

void g(int a)
{
    int c; // block scope, automatic. This was file scope until declared here.
    {
        int a, d; // block scope, automatic.
    }
}