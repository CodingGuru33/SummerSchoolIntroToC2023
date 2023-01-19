#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Define your constants here
#define CMD_ATK 'a'
#define CMD_HEAL 'h'
#define CMD_STATS 'c'
#define CMD_OPP 'o'
#define CMD_CMDS '?'

int main(void) {
    // Begin game

    // STEP 1
    // TODO: INSERT WELCOME MESSAGE HERE
    

    // STEP 2
    // TODO: SCAN POKEMON STATS HERE 
    // HINT: USE SCANF 

    // TODO: PRINT SCANNED STATS HERE


    // STEP 3
    // TODO: CHECK FOR VALID INPUTS HERE
    // HINT: USE IF-STATEMENTS


    // STEP 4
    // TODO: REPEATEDLY ASK THE USER IF INVALID INPUT IS DETECTED
    // HINT: USE WHILE LOOPS + BOOLEANS


    // STEP 5
    // TODO: EDIT YOUR CODE TO STORE DATA IN ARRAY


    // STEP 6
    // TODO: CREATE OPPONENT STATS HERE
    // HINT: USE RAND() and SRAND()


    // STEP 9: 
    // TODO: SCAN FOR POTIONS HERE


    // CHALLENGE II: 
    // TODO: CALCULATE TYPE ADVANTAGE HERE
    // HINT: 
    /* 
     * dmg_dealt = adv * (own_att / opp_def) + 1;
     * dmg_taken = 1 / adv * (opp_att / own_def) + 1;
     * adv = 1 if type is same
     *       2 if type advantage (e.g. fire against grass)
     *       0.5 if type disadvantage (e.g. grass against fire)
     */
    

    /* // TO REMOVE UPON STARTING STEP 7 //////////////////////////////////////
    printf("Valid commands:\n");
    printf("[%c]: ATTACK the opponent!\n", CMD_ATK);
    printf("[%c]: HEAL your pokemon by using a potion!\n", CMD_HEAL);
    printf("[%c]: CHECK your pokemon's stats!\n", CMD_STATS);
    printf("[%c]: CHECK your opponent's stats!\n", CMD_OPP);
    printf("[%c]: VIEW commands!\n\n", CMD_CMDS);
    printf("Please enter a command: ");

    // Scan commands
    // MAY NEED TO EDIT WHILE LOOP CONDITION FOR WIN/LOSE CONDITION
    char cmd;
    while (scanf(" %c", &cmd) !== EOF) { // Repeatedly scans for commands until ctrl + d is pressed
        // STEP 7
        // TODO: ATTACK OPPONENT + OPPONENT ATTACKS USER
        if (cmd == CMD_ATK) {
            

            // STEP 9
            // TODO: SPEND A POTION TO HEAL + OPPONENT ATTACKS USER
        } else if (cmd == CMD_HEAL) {
            

            // STEP 8
            // TODO: CHECK USER POKEMON'S STATS
        } else if (cmd == CMD_STATS) {
            

            // STEP 8
            // TODO: CHECK OPPONENT'S STATS
        } else if (cmd == CMD_OPP) {
            
        
            // Check Commands
        } else if (cmd == CMD_CMDS) {
            printf("[%c]: ATTACK the opponent!\n", CMD_ATK);
            printf("[%c]: HEAL your pokemon by using a potion!\n", CMD_HEAL);
            printf("[%c]: CHECK your pokemon's stats!\n", CMD_STATS);
            printf("[%c]: CHECK your opponent's stats!\n", CMD_OPP);
            printf("[%c]: VIEW commands!\n\n", CMD_CMDS);

            // Invalid Command 
        } else {
            printf("Unknown command: %c\n", cmd);
        }

        // Ask again for command
        printf("Please enter a command: ");
    }
    */ // TO REMOVE UPON STARTING STEP 7 //////////////////////////////////////

    return 0;
}