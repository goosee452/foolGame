#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct Card{
public:
    int cost;
    string suit;
};

class Player{
public:
  Card* cards;
  int cardsQuant;

  Player(){
   cardsQuant = 6;
   cards = new Card[6];
  }

  bool noCardsCheck(){
   if(cardsQuant == 0){
     return true;
   }
   return false;
  }

  void copyCards(Card* copiedCards, int copiedCardsQuant){
      for(int count; count < copiedCardsQuant; count++){

        cards[count] = copiedCards[count];
      }
  }

  void cardsAdd(int addQuant){
   if(addQuant > 0){

    Card* tempCards = new Card[cardsQuant + addQuant];



   }
  }



  ~Player(){
    delete[] cards;
  }
 };



//wasted cards
//player can add & if cardsQuant = 0 => player wins, also he can add cards

void cardsShuffle(Card* cards, int cardsQuantity, int shuffleTimes){
     srand(time(0));
  Card tempCard;

  int firstNum;
  int secondNum;

  for(int count = 0; count < shuffleTimes; count++){

   firstNum = rand() % cardsQuantity;
   secondNum = rand() % cardsQuantity;

   tempCard = cards[firstNum];
   cards[firstNum] = cards[secondNum];
   cards[secondNum] = tempCard;

  }

}
//suits: clover, spade, heart, tile

int main()
{

  int a = 5;
  Card *cards = new Card[a];
  for(int i = 0; i < a; i++){
    cards[i].cost = i;
    cards[i].suit  ="a";
  }

   cardsShuffle(cards, a, 50);

   for(int i = 0; i < a; i++){
     cout << "\n------------" << cards[i].cost << "  " << cards[i].suit << "\n------------";
   }



    delete[] cards;
    return 0;
}






//void Division::add(int quantity){//quantity = quantity of tanks that u add to division
//
//	if (quantity > 0 && tankQuantity >= 0) {
//
//		Tank* tempTanks = new Tank[tankQuantity + quantity];
//
//		if (tankQuantity > 0) {
//			for (int count = 0; count < tankQuantity; count++) {
//				tempTanks[count] = tanks[count];
//			}
//		}
//
//
//		delete[] tanks;
//		tanks = tempTanks;
//		tankQuantity += quantity;
//	}
//
//}
