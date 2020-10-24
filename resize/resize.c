#include <ncurses.h>
#include <signal.h>
#include <string.h>
#include <sys/ioctl.h>

void x_resize();

int main() {
    signal(SIGWINCH, x_resize);                                 
    initscr();
    keypad(stdscr, TRUE);
    printw("resize the window as you wish. Hit any key to exit.\n");
    getch();
    endwin();
    return 0;
}

void x_resize() {
    struct winsize sz;
    ioctl(0, TIOCGWINSZ, &sz);
    resizeterm(sz.ws_row, sz.ws_col);
    printw("size_row: %d, size_col: %d\n", sz.ws_row, sz.ws_col);
    refresh();
}