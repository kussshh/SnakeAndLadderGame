# SnakeAndLadderGame
Snake and Ladder game in C++

# Introduction
The Snake and Ladder game is a popular board game that people of all ages enjoy. It is a classic game that is easy to understand and play.

# Entities and Relationships in Snake and Ladder Game
In the Snake and Ladder game, there are several entities and their relationships.

The Game class acts as the main controller of the game. It has a composition relationship with the Board, Player, Snake, and Ladder classes. The Game class contains an object of the Board class, an array of Player objects, an array of Snake objects, and an array of Ladder objects.
 
The Board class contains information about the game board, including player and snake/ladder positions. It has a relationship of association with the Player, Snake, and Ladder classes as it uses their attributes and methods to move players and check for snakes and ladders.
 
The Player class contains information about individual players, including their names and the number of moves. It has a relationship of association with the Board class as it uses the attributes and methods of the Board class to move the player on the board.
 
The Snake and Ladder classes contain information about the positions of snakes and ladders on the board, respectively. They have a relationship of association with the Board class as the Board class uses their attributes and methods to check for snakes and ladders on the board.

# Classes
The Snake and Ladder game can be designed using the following classes:

Game: This class represents the overall game and contains the main method that runs the game. It also has methods to initialise the board, players, snakes, and ladders.
 
Board: This class represents the game board and contains the attributes and methods for the board size, player positions, and the locations of the snakes and ladders.
 
Player: This class represents the players in the game and contains the attributes and methods for the player's name, position on the board, and the number of moves made.
 
Snake: This class represents the snakes on the board and contains the attributes and methods for the snake's head and tail positions.
 
Ladder: This class represents the ladders on the board and contains the attributes and methods for the ladder's start and end positions.

# Attributes
The Game class has the following attributes:

board: An object of the Board class
 
players: An array of Player objects
 
snakes: An array of Snake objects
 
ladders: An array of Ladder objects
 
The Board class has the following attributes:

size: An integer representing the size of the board
 
playerPositions: An array of integers representing the positions of the players on the board
 
snakePositions: An array of integers representing the positions of the snakes on the board
 
ladderPositions: An array of integers representing the positions of the ladders on the board
 
The Player class has the following attributes:

name: A string representing the player's name
 
position: An integer representing the player's position on the board
 
moves: An integer representing the number of moves made by the player
 
The Snake class has the following attributes:

head: An integer representing the position of the snake's head on the board
 
tail: An integer representing the position of the snake's tail on the board
 
The Ladder class has the following attributes:

start: An integer representing the position of the ladder's start on the board
 
end: An integer representing the position of the ladder's end on the board

# Methods
The Game class has the following methods:

main(): The main method that runs the game
 
initializeBoard(): A method to initialise the board, players, and snakes and ladders
 
play(): A method that runs the main game loop and handles the players' turns
 
checkForWin(): A method that checks if a player has reached the end of the board and won the game
 
The Board class has the following methods:

movePlayer(): A method that moves a player to a new position on the board
 
checkForSnakes(): A method that checks if a player landed on a snake and moves them accordingly
 
checkForLadders(): A method that checks if a player landed on a ladder and moves them accordingly
 
The Player class has the following methods:

rollDice(): A method that simulates rolling a dice and returns the number rolled
 
move(): A method that moves the player to a new position on the board
