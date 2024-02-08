#include<stdio.h>
#define COMMAND(NAME,TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME,TYPE) void TYPE##_##NAME##_command(void)
void COMMAND(quit,internal)(void)
{
    printf("\n Hello, world, ");
}
DEFINE_COMMAND(quit,external) {
    printf("my name is Nikola.");
}
int main()
{
    internal_quit_command();
    external_quit_command();
    return 0;

}