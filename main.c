#include <stdio.h>
#include <stdlib.h>


#define MAX 100
#define MIN 55

//Prototypes
int addThree(int);
void showMessage();
void checkRange(int);

int main()
{   //start main()

    checkRange(101);

    /*int num = 1;

    num = addThree(num);

    printf("%d", num);

    showMessage();
    */
    return 0;

}   //main ends()

int addThree(int x)
{   //start addThree

    return x + 3;

}   //end addThree

void showMessage()
{
    printf("Value is out of range!\n");
}


void checkRange(int enteredValue)
{
    // || = or
    // && = and

    if (enteredValue > MAX || enteredValue < MIN )
    {
        showMessage();
    }

}

