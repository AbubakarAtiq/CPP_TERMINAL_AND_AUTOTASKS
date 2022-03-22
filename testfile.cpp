#include <iostream>
#include <string>
#include "input_output.h"
using namespace std;
int main()
{
    input_output IO_user;
    string brief_introduction("C++ based terminal, welcome, Type --version, --help, --webhelp\n");
    cout << brief_introduction;
    IO_user.basic_user_prompt();
    cout << endl;
    main();
}