#include <stdio.h>
#define MIN 0.0
#define MAX 200.0
#define STEP 10.0
float celsiusToFarenheit(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
    // for some reason celsius * (9 / 5) does nothing. Gonna have to look into this later.
    // FOUND IT: INTEGER DIVISION TRUNCATES, which means the float part gets removed. 9 and 5 are both ints, and 9/5 = 1.8, therefore the .8
    // gets truncated and removed, therefore multiplying all celsius values by 1, and only adding 32 to them.
}

int main()
{

    for (int i = MAX; i >= MIN; i -= STEP)
    {
        float celsius = i;
        float farenheit = celsiusToFarenheit(celsius);
        printf("%3.0f°C -> %3.1f°F\n", celsius, farenheit);
    }

    return 0;
}