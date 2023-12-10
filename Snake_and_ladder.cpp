#/*JAI SHREE GANESH
JAI SHREE RAM
JAI SHREE KRISHNA
HAR HAR MAHADEV*/
 
#include <bits/stdc++.h>
using namespace std;

class Player
{
public:
	int position;
	int moves;
	string name;

	Player(string n) {
		name = n;
		position = 0;
		moves = 0;
	}

	int rollDice() {
		return rand()%6;
	}
	
	void move(int x) {
		position += x;
		++moves;
	}
};


class Board {
public:
	int size;
	vector<int> playerPositions;
	vector<int> snakePositions;
	vector<int> ladderPositions;

	// Board(int s) {
	// 	size = s;
	// }

	void movePlayer(Player &p, int roll) {
		int newPos = p.position + roll;
		if(newPos > size) {
			return;
		}

		for(int i=0;i<snakePositions.size();i+=2) {
			if(snakePositions[i] == newPos) {
				newPos = snakePositions[i+1];
				break;
			}
		}

		for(int i=0;i<ladderPositions.size();i+=2) {
			if(ladderPositions[i] == newPos) {
				newPos = ladderPositions[i+1];
				break;
			}
		}

		p.position = newPos;
	}

	bool checkWinner(Player &p) {
		if(p.position == size) {
			cout<<p.name<<" wins the game"<<endl;
			return true;
		}
		return false;
	}
};

class Game {
public:
	Board board;
	vector <Player> players;
	vector <pair<int, int>> snakes;
	vector <pair<int, int>> ladders;

	Game(int boardSize, vector <string> playerNames, vector<pair<int, int>> s, vector <pair<int, int>> l) {
		for (int i = 0; i < playerNames.size(); i++) {
            players.push_back(Player(playerNames[i]));
        }
        board.size = boardSize;
		snakes = s;
		ladders = l;
		intializeBoard();
	}

	void intializeBoard() {

		for(int i=0;i<snakes.size();i++) {
			board.snakePositions.push_back(snakes[i].first);
			board.snakePositions.push_back(snakes[i].second);
		}

		for(int i=0;i<ladders.size();i++) {
			board.ladderPositions.push_back(ladders[i].first);
			board.ladderPositions.push_back(ladders[i].second);
		}
	}

	void play() {
		while (true) {
           for (int i = 0; i < players.size(); i++) {
               int roll = players[i].rollDice();
               cout << players[i].name << " rolled a " << roll << std::endl;
               board.movePlayer(players[i], roll);
               cout << players[i].name << " is now on square " << players[i].position << std::endl;
               if (board.checkWinner(players[i])) {
                   return;
               }
           }
       }
	}
};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(20);
    //cout<<fixed<<setprecision(20);
    //TEST

   vector<std::string> playerNames = {"Player 1", "Player 2"};
   vector<std::pair<int, int>> snakes = {{17, 7}, {54, 34}};
   vector<std::pair<int, int>> ladders = {{62, 81}, {87, 96}};
   Game game(100, playerNames, snakes, ladders);
   game.play();
   return 0;
}