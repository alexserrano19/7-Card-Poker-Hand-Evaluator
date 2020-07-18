#ifndef SPEED_DEALING_H
#define SPEED_DEALING_H

#include <iostream>
#include <chrono>
#include "userInterface.h"

class SpeedDealing
{
public:
    SpeedDealing();
    bool getContinuousLoopOn() const;
    bool getCheckForWinner() const;
    int getPlayersPerLoop() const;
    void setCheckForWinner(bool w);
    void processLoadingTime();
    void speedDealingOption(UserInterface ui, bool sevenCardGame);
    void handleFinalContinuousLoop();

private:
    bool continuousLoopOn, checkForWinner;
    int playersPerContinuousLoop, outputGames;
    int duration, tempDuration;
    unsigned long long int numberOfLoops;
    unsigned long long int continuousLoopingRequirement;
    // Used for timer
    std::chrono::high_resolution_clock::time_point startTimer, stopTimer;
    // Used to activate/deactivate 'cout' statements 
    std::streambuf* orig_buf = std::cout.rdbuf();
};

#endif