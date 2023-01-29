#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.

 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase



//  1)
//  Noun:        car
//  action 1:    the car emits smog
car.emitsSmog();
//  action 2:    the car restricts gas flow
car.restrictsGasFlow();
//  action 3:    the car utilizes fuel
car.utilizeFuel();
//  2)
//  Noun:        elevator
//  action 1:    the elevator carries passengers
elevator.carriesPassengers();
//  action 2:    the elevator goes up
elevator.goesUp();
//  action 3:    the elevator goes down
elevator.goesDown();
//  3)
//  Noun:        arm
//  action 1:    the arm flexes
arm.flexes();
//  action 2:    the arm rotates
arm.rotates();
//  action 3:    the arm controls motion
arm.controlsMotion();
//  4)
//  Noun:        lion
//  action 1:    a lion roars
lion.roars();
//  action 2:    a lion eats
lion.eats();
//  action 3:    a lion protects its pride
lion.protectsPride();
//  5)
//  Noun:        light bulb
//  action 1:    a light bulb illuminates
lightBulb.illuminates();
//  action 2:    a light bulb burns out
lightBulb.burnsOut();
//  action 3:    a light bulb gets hot
lightbulb.getsHot();
//  6)
//  Noun:        window
//  action 1:    the window opens
window.opens();
//  action 2:    the window passes light
window.passesLight();
//  action 3:    the window adds ventilation
window.addsVentilation();
//  7)
//  Noun:        speaker
//  action 1:    the speakers produces sound
speaker.producesSound();
//  action 2:    the speaker consumes energy
speaker.consumesEnergy();
//  action 3:    the speaker vibrates
speaker.vibrates();
//  8)
//  Noun:        piano    
//  action 1:    the piano sustains a note
piano.sustainsNote();
//  action 2:    the piano dampens notes
piano.dampensNote();
//  action 3:    the piano resonates
piano.resonates();
//  9)
//  Noun:        guitar
//  action 1:    the guitar distorts
guitar.distorts();
//  action 2:    the guitar switches tone
guitar.switchesTone();
//  action 3:    the guitar changes amplitude
guitar.changesAmplitude();
//  10)
//  Noun:        cat
//  action 1:    the cat meows
cat.meows();
//  action 2:    the cat hisses
cat.hisses();
//  action 3:    the cat runs around
cat.runsAround();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
