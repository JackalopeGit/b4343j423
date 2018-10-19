#include "template.h"

int main()
{
    foo<FunctionEnum::Dummy>();
    foo<FunctionEnum::Add>();
    return 0;
}
