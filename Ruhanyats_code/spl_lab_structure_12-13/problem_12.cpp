#include <stdio.h>

struct CricketPlayer
{
    char playerName[50];
    char playerCountry[50];
    int runs[3];
    int wickets[3];
    int points[3];
};

void calculatePoints(struct CricketPlayer *player, int matchIndex)
{
    player->points[matchIndex] = player->wickets[matchIndex] * 12;
    if (player->runs[matchIndex] <= 25)
    {
        player->points[matchIndex] += 5;
    }
    else if (player->runs[matchIndex] <= 50)
    {
        player->points[matchIndex] += 10;
    }
    else if (player->runs[matchIndex] <= 75)
    {
        player->points[matchIndex] += 15;
    }
    else
    {
        player->points[matchIndex] += 20;
    }
}

int main()
{
    struct CricketPlayer players[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Enter player %d's name: ", i + 1);
        fgets(players[i].playerName, sizeof(players[i].playerName), stdin);
        printf("Enter player %d's country: ", i + 1);
        fgets(players[i].playerCountry, sizeof(players[i].playerCountry), stdin);
        printf("Enter player %d's runs for 3 matches: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &players[i].runs[j]);
        }
        printf("Enter player %d's wickets for 3 matches: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &players[i].wickets[j]);
        }
        while (getchar() != '\n');
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            calculatePoints(&players[i], j);
        }
    }

    for (int j = 0; j < 3; j++)
    {
        printf("\nMatch %d:\n", j + 1);
        for (int i = 0; i < 2; i++)
        {
            printf("%s points: %d\n", players[i].playerName, players[i].points[j]);
        }
    }

    return 0;
}

