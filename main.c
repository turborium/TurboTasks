// Your First holeCounter Program
// GNU GPL 3 License

#include <stdio.h>

int HoCo(const char * );

int main() {

    char * YaStroka = "Windows";

    printf("\n holes in string: %d",HoCo(YaStroka));

    return 0;
}





int HoCo(const char * str) {
    
    int counter = 0;
    int varSym = 1; //set value for '&'

    for(int i = 0;str[i];i++) {
        switch (str[i])
        {
        case '&':
            counter = counter + varSym;//variable value of & (1 or 2)
            break;

        //1 hole
        case '#':
        case '0':
        case '4':
        case '6':
        case '9':
        case '@':
        case 'A':
        case 'a':
        case 'b':
        case 'D':
        case 'd':
        case 'e':
        case 'g':
        case 'o':
        case 'O':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'R': counter++;
            break;
        
        //2 holes
        case '$':
        case '%':
        case 'B':
        case '8': counter = counter + 2;
            break;
        default:
            break;
        }
    }
    return counter;
}
