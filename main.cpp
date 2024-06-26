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
//  Noun: cat
//  action 1: the cat purrs
    cat.purr()
//  action 2: the cat stretches
    cat.stretch();
//  action 3: the cat chases a ball
    cat.chaseBall();

//  2) 
//  Noun: lightning
//  action 1: the lightning strikes the ground
    lightning.strikeGround();
//  action 2: the lightning strikes a tree    
    lightning.strikeTree();
//  action 3: the lightning dissapates  
    lightning.dissapate();

//  3)
//  Noun: puck
//  action 1: the puck bounces
    puck.bounce();
//  action 2: the puck slides
    puck.slide();
//  action 3: the puck stops
    puck.stop();

//  4) 
//  Noun: phone
//  action 1: the phone rings
    phone.ring();
//  action 2: the phone vibrates
    phone.vibrate();
//  action 3: the phone lights up
    phone.illuminate();

//  5)
//  Noun: bobblehead
//  action 1: the bobblehead bobbles
    bobblehead.bobble();
//  action 2: the bobblehead wobbles
    bobblehead.wobble();
//  action 3: the bobblehead falls over
    bobblehead.fallOver();

//  6)
//  Noun: oven
//  action 1: the oven preheats
    oven.preheat();
//  action 2: the oven smokes
    oven.emitSmoke();
//  action 3: the oven cools
    oven.coolDown();

//  7)
//  Noun: slot machine
//  action 1: the slot machine spins
    slotMachine.spin();
//  action 2: the slot machine stops
    slotMachine.stop();
//  action 3: the slot machine rings
    slotMachine.ring();

//  8)
//  Noun: rice krispies
//  action 1: the rice krispies snap
    riceKrispies.snap();
//  action 2: the rice krispies crackle
    riceKrispies.crackle();
//  action 3: the rice krispies pop
    riceKrispies.pop();

//  9) 
//  Noun: printer
//  action 1: the printer moves along the X axis
    printer.moveX();
//  action 2: the printer auto-levels
    printer.autoLevel();
//  action 3: the printer shuts off
    printer.off();

//  10)
//  Noun: sky colour
//  action 1: the sky colour brightens 
    skyColour.getBrightness();
//  action 2: the sky colour changes
    skyColour.getHue();
//  action 3: the sky colour dims
    skyColour.getAlpha();
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
