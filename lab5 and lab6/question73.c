#include <stdio.h>

int main() 
{
    int count[5] = {0};  
    int spoiltBallots = 0;  
    int vote;
    
    printf("Enter the votes (1-5 for candidates, 0 to stop):\n");
    
    
    while (1) 
    {
        printf("Enter vote: ");
        scanf("%d", &vote);
        
        if (vote == 0) 
        {
            break;  
        }
        
        if (vote >= 1 && vote <= 5) 
        {
            count[vote - 1]++;  
            spoiltBallots++;  
        }
    }

   
    printf("\nVote Count:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }

    printf("Spoilt Ballots: %d\n", spoiltBallots);

    return 0;
}
