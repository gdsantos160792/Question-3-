#include <stdio.h>
#include <stdlib.h>

/* This file has the solution for the questions 3. This progrom check if is possible change a string to another one using exactely k operations.*/

    const char * ConcatRemove(char s[100], char t[100], int k)
    {
        //Start the solution for problem 4//

        if(strlen(s)>100 || strlen(t)>100 || k>100 ||k<0){
            return "The entered data is out off the range values";
        }

        //Finish solution for problem 4 //
        if((strlen(s)+strlen(t))<k)

            {
                return "Yes";
                }
        //Here we will find the common letters of the strings//

        int cont = 0;
        int low_value;

        if(strlen(s)<strlen(t)){low_value=strlen(s);}

        else{low_value=strlen(t);}

        for (int i = 0;i < low_value;i++){
            if (s[i]==t[i]){
                cont++;
            }
            else{
                break;
            }
        }
        if (k>=(strlen(s)+strlen(t)-2*cont)){
                return "Yes";
            }
        else
            {
                return "No";
                }
    }

int main(void)
{

    printf("%s",ConcatRemove("Test","Gabriel",5));
}
