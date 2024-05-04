#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CricketPlayer
{
    char playerName[50];
    char playerCountry[50];
    int runs[3];
    int wickets[3];
    int points[3];
    int totalPoints;
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

void findMOM(struct CricketPlayer players[], int numPlayers, int matchIndex)
{
    int maxPoints = -1;
    int momIndex = -1;
    for (int i = 0; i < numPlayers; i++)
    {
        if (players[i].points[matchIndex] > maxPoints)
        {
            maxPoints = players[i].points[matchIndex];
            momIndex = i;
        }
    }
    printf("MOM: %s\n", players[momIndex].playerName);
}

void findMOS(struct CricketPlayer players[], int numPlayers)
{
    int maxTotalPoints = -1;
    int mosIndex = -1;
    for (int i = 0; i < numPlayers; i++)
    {
        if (players[i].totalPoints > maxTotalPoints)
        {
            maxTotalPoints = players[i].totalPoints;
            mosIndex = i;
        }
    }
    printf("Man of the Series: %s\n", players[mosIndex].playerName);
}

int main()
{
    struct CricketPlayer players[2];
    int numPlayers = sizeof(players) / sizeof(players[0]);


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

    for (int i = 0; i < numPlayers; i++)
    {
        players[i].totalPoints = 0;
        for (int j = 0; j < 3; j++)
        {
            calculatePoints(&players[i], j);
            players[i].totalPoints += players[i].points[j];
        }
    }

    for (int j = 0; j < 3; j++)
    {
        printf("\nMatch %d:\n", j + 1);
        for (int i = 0; i < numPlayers; i++)
        {
            printf("%s points: %d\n", players[i].playerName, players[i].points[j]);
        }
        findMOM(players, numPlayers, j);
    }

    printf("\n");
    findMOS(players, numPlayers);

    return 0;
}
