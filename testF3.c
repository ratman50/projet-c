#include <ncurses.h>
#include <stdlib.h>
int main(void) {
    WINDOW *haut, *bas;
    
    initscr();
    haut= subwin(stdscr, LINES / 2, COLS, 0, 0);        // Créé une fenêtre de 'LINES / 2' lignes et de COLS colonnes en 0, 0
    
    box(haut, ACS_VLINE, ACS_HLINE);
    
    mvwprintw(haut, 2, 2, "Ceci est la fenetre du haut");
    
    wrefresh(haut);
    
    getch();
    endwin();
    
    free(haut);
    free(bas);
    
    return 0;
}