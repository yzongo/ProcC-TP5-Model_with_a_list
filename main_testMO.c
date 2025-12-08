
#include <stdlib.h>

#include "multimedia-object.h"
int main()
{
    MultimediaObject o;
    TypeMultimediaObject t = VIDEO;
    fillMO(&o, "test", "/path/to/test", 8, 12, 2025, PHOTO);
    displayConsoleOM(&o);
    test_MO();
    return 0;
}
