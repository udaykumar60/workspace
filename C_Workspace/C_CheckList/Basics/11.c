#include <stdio.h>

int main() {
    // \n: Move to the start of the next line
    printf("Line 1\nLine 2 (Moved to next line)\n\n");

    // \t: Move to the next horizontal tab stop
    printf("Column1\tColumn2\tColumn3\n\n");

    // \\: Print a single backslash
    printf("Backslash: \\\n\n");

    // \": Print a double quote character
    printf("Double quote: \"Hello World\"\n\n");

    // \': Print a single quote character
    printf("Single quote: \'A\'\n\n");

    // \r: Move to the beginning of the current line
    // This will overwrite the beginning of the line
    printf("Old Text\rNew Text (Overwrote 'Old Text')\n\n");

    // \b: Move the cursor back one position
    printf("12345\b6\n\n"); // Prints 12346

    // \a: Audible alert (bell/beep)
    printf("Beeping now... \a\n");

    return 0;
}
