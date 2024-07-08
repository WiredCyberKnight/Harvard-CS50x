<h1 align="center">Harvard's CS50x Introduction to Computer Science</h1>

<p align="center">
  <img src="https://raw.githubusercontent.com/WiredCyberKnight/Harvard-CS50x/main/55d26d038ead7aed1d238175d444ce8d.png" alt="Harvard University Logo" width="20%">
</p>

## Week 0 - Scratch - [Let's Play OSRS](https://scratch.mit.edu/projects/1043180671/)

Week 0 was pretty fun because we had to create a game on the scratch.mit.edu website. After learning about conditionals, loops, variables, etc., we had to go on the website and create code there to make a game or story. I decided to make a game where you're a knight, and for 30 seconds, you have to make sure you don't get hit 5 times. The game is called Let's Play OSRS. Click on Let's Play OSRS to go to the game and check it out.

## Week 1 - C Programming Language

- Hello, Me

    For the first coding homework project, we had to use the terminal to make a directory with mkdir called "me," then cd into the directory, and lastly type out code hello.c to create our C file and start coding. With my background in using Linux, that was the easy and fun part. I love using Linux. The homework was to code an input that would ask, "What's your name?" and have it return "Hello, name." I was able to execute this by just using printf followed by a hello and a %s to pull the input of the user's name, so it would say back "Hello, name."

- Mario

    For the second coding homework, this was a little bit more difficult because we had to implement a program in C that recreates a pyramid that ascends right-aligned using the hash '#' text. The rules were that the program rejects inputs like -1, 0, letters, or words, and it only accepts numbers from 1 to 8. The walkthrough video was super helpful but it only gave the building blocks to build a left-aligned pyramid. The trick was to implement spaces into a prototype function called 'print_row', where the main function calls the 'print_row' function to add the spaces needed to "push" the bricks to the right, creating a right-aligned pyramid.

- Cash or Credit

  For the third coding homework, we had to implement a program that prints the minimum coins needed to make the given amount of change, in cents. This project didn’t have a walkthrough video, but it did have some advice and pseudocode as comments, along with some pictures to give us a foundation on what it should look like. I used the help of Google and the DuckAI that Harvard provides to help us on the project. I found out that a lot of it was just repetitive functions with different variables for the different coins while implementing a while loop. This project was pretty cool, but I just didn’t like how, for instance, if I put in "Change owed: 70," it would output 4… 4 of what coins though? I couldn’t implement that feature into the homework, because that’s where our assignment ended. I understand that this is still the beginning of the course, but most importantly, I learned a lot.

## Week 2 - C Programming Language - Arrays

- Cash or Credit

    For the first homework of Week 2, we had to implement a program in C that determines the winner of a short Scrabble-like game. The program takes two inputs, one for Player 1 and one for Player 2. Depending on which player scores the most points, it prints either “Player 1 wins!”, “Player 2 wins!”, or “Tie!”.

    To achieve this, I set up an integer array 'points' where each element corresponds to the score aligned with a letter in the alphabet. I also implemented a function that checks if a character is alphabetic (ignoring non-alphabetic characters), handles uppercase and lowercase letters correctly, and computes the appropriate score based on the ASCII standard. This is crucial because comparing 'a' and 'A' directly can cause issues due to their different ASCII values.
