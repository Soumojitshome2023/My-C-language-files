#include <stdio.h>
#include <string.h>

// AI Using C

int main()
{
    char st[30], user_name[20];

    while ((strcmp(st, "bye")))
    {   
        // user input 
        printf("\nType Here : ");
        gets(st);

        if ((strcmp(st, "bye"))) // say bye to end 
        {   
            // frequently asked questions

            if (!(strcmp(st, "hello")) || !(strcmp(st, "hi")) || !(strcmp(st, "hey")))
                printf("Hi, are u okay :) ?");

            else if (!(strcmp(st, "yes")))
                printf("Ok ");

            else if (!(strcmp(st, "are you ok?")))
                printf("Yes :) ");

            else if (!(strcmp(st, "ok")) || !(strcmp(st, "hmm")) || !(strcmp(st, "oh")))
                printf("Hmm :) ");

            else if (!(strcmp(st, "what is your name?")))
            {
                printf("I have no name :) ");
                printf("your ? ");
                gets(user_name);

                printf("Hello %s ^_^", user_name);
            }

            else if (!(strcmp(st, "thanks")))
                printf("Welcome ");

            else if (!(strcmp(st, "okay")))
                printf("Hmm, okk ");

            else if (!(strcmp(st, "do you know me?")))
                printf("yes, you are a good person :) ");

            else if (!(strcmp(st, "good morning")) || !(strcmp(st, "good afternoon")))
                printf("Hmm, Good Morning ^_^");



            else 
            {   // for unknown questions
                printf("I can't understand :( ");
            }
        }
        else
            printf("Okay Bye :)");
    }

    return 0;
}