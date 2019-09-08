/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: States
Date: 4/7/2019
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// declare struct and give necessary variables
struct capitalInfo
{
    char state[15];
    char capital[15];
    float lattitude;
    float longitude;
}
// readLine function
readLine(char line[], int limit, FILE *fp)
{
    fgets(line, limit, fp);
    strtok(line, "\n");
}
// readNextCity function, scan in necessary variables
void readNextCity(struct capitalInfo info, FILE *fp)
{
    char tmp[10];
    readLine(info.state, 15, fp);
    readLine(info.capital, 15, fp);
    fscanf(fp, "%f", &info.lattitude);
    fscanf(fp, "%f", &info.longitude);
    readLine(tmp, 10, fp);
}
// function that returns file pointer of file, uses mode and name
FILE *openFile(char filename[], char mode[])
{
    FILE *fp;
    fp = fopen(filename, mode);
    // if file does not exist, let user know
    if (fp == NULL)
    {
        printf("Unable to open file.");
        exit(0);
    }

    return fp;
}
// do search
void doSearch(char state[], char city[])
{
    // declare struct and give it state and city
    struct capitalInfo userInfo;
    strcpy(userInfo.state, state);
    strcpy(userInfo.capital, city);
    // call open file
    FILE *fp = openFile("data.txt", "r");
    // while the file has not ended
    while (!feof(fp))
    {
        // read the next city
        readNextCity(userInfo, fp);
        // if the state and city are the same
        if (strcmp(userInfo.state, state) == 0 && strcmp(userInfo.capital, city) == 0)
        {
            // assign struct variables
            printf("Entry found!\n");
            printf("State: %s\n", userInfo.state);
            printf("City: %s\n", userInfo.capital);
            printf("Lattitude: %.4f\n", userInfo.lattitude);
            printf("Longitude: %.4f\n", userInfo.longitude);
            break;
        }
        printf("No matching entry was found.\n");
    }
    fclose(fp);
}

int main()
{
    // declare answer
    char answer[] = "Y";
    // while the answer is still yes
    while (strcmp(answer, "Y") == 0 || strcmp(answer, "y") == 0)
    {
        // declare necessary variables
        char city[15];
        char state[15];
        // ask for state and city
        printf("Please enter a state: ");
        gets(state);
        printf("Please enter a city: ");
        gets(city);

        doSearch(state, city);
        printf("Would you like to search again? Y/N: ");
        scanf("%s", answer);
    }

    printf("Thank you for using this program :)\n");

    return 0;
}