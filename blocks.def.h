// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    // {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",
    // 30, 0},

    // {"", "date '+%b %d (%a) %I:%M%p'", 5, 0},
    // {"", "date '+%I:%M%p'", 60, 0},
    {"", "sb-disk", 300, 0},
    {"", "sb-loadavg", 1, 0},
    {"", "sb-memory", 1, 0},
    {"", "sb-volume", 0, 11},
    {"", "sb-battery", 60, 0},
    {"", "sb-network", 60, 0},
    {"", "sb-date", 60, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
