/**
 * Section 13
 * Exercise 35
 * Subject: OOP Classes and objects
 *
 * Problem title: Creating and Accessing Objects
 *
 *      We have already declared a C++ class named Dog  that is located in Dog.h
 *      (we'll learn about header files later in this section).
 *
 *      In the test_dog  function create a Dog  object named spot  and,
 *      using the . operator, set the name  attribute to the string "Spot"
 *      and the age  attribute to 5 .
 *
 *      You can find my solution by clicking on the solution.txt file on the left pane.
 *      But please make sure you give it a go yourself first, and only check the solution
 *      if you really get stuck.
 *
 * Expected result:
 *
 */

#include <iostream>

#include "Dog.h"

using namespace std;

Dog test_dog();
int main()
{
    Dog pet;
    pet = test_dog();

    cout << "Our pet has name " << pet.name << ", and hi's age is " << pet.age << " years." << endl;

    cout << endl;
    return 0;
}

Dog test_dog()
{
    Dog spot;
    spot.name = "Spot";
    spot.age = 5;

    return spot;
}
