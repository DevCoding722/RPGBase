#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <iomanip>
#include <thread>
#include <time.h>
#include <windows.h>
#include <random>
using namespace std;
using namespace std::chrono;
class mainCharacter {
 
public:
	vector<string> usernameArr;
	mainCharacter()
	{
		srand(time(NULL));
	}
	
	int health = 100;
	int magicPoints = 100;
	int exp = 0;
	int firstCheckpoint = 0;
	bool slashBool = false;
	bool smashBool = false;
	bool slashWeakness = false;
	bool smashWeakness = false;
	bool potionBool = false;
	bool escapeBool = false;
	bool mpBool = false;
	
	bool fireBool = false;
	bool healSpellBool = false;
	
	string username(string username)
	{
		
		usernameArr.push_back(username);
		return usernameArr[0];
	}

	bool RandomItem(int randomItem)
	{
		
		cout << "You get a random item!" << endl;
		if (randomItem == 1)
		{
		  
			potionBool = true;
			return potionBool;
		}
		else if (randomItem == 2)
		{
			mpBool = true;
			return mpBool;
		}
		return potionBool;
		return mpBool;
		
	}
	bool randomSpell(int randomSpell)
	{
		cout << "You got a random spell!" << endl;
		if (randomSpell == 1)
		{
			fireBool = true;
			return fireBool;
		}
		else if (randomSpell == 2)
		{
			healSpellBool = true;
			return healSpellBool;
		}
		else
		{
		   
		}
		return fireBool;
		return healSpellBool;
	}
	void DrawCharacterAtk()
	{
		int atkNum = 0;
		
			switch (atkNum)
			{
			case 0:
				
				
				cout << std::format( "                 "                "######" )<< endl;
				cout << std::format( "                  "               "#####" ) << endl;
				cout << std::format( "                 "             "####") << endl;
				cout << std::format("               "               "###") << endl;
				cout << std::format("              "               "###" ) << endl;
				cout << std::format("    "  "####"  "     "    "##") << endl;
				cout << std::format( "    " "####"  "    "  "##") << endl;
				cout << std::format("####"  "    " "####"  ) << endl;
				cout << std::format("####"  "    "  "####"  ) << endl;
				cout << std::format("####"  "    "  "####"  ) << endl;
				cout << std::format( "    " "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				auto five_seconds = 0.25s;
				std::this_thread::sleep_for(five_seconds);
				system("cls");
			


			case 1:
				cout << std::format( "    "  "###"  "  ") << endl;
				cout << std::format( "    "  "###"  "  "  " "  "###################") << endl;
				cout << std::format( "####"  "   "  "####"  " "  "###################") << endl;
				cout << std::format( "####"  "   "  "####"  " ") << endl;
				cout << std::format("####"   "   "  "####"  " ") << endl;
				cout << std::format("####"   "   "  "####"  " ") << endl;
				cout << std::format("####"   "   "  "####"  " ") << endl;
				cout << std::format("####"   "   "  "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				cout << std::format("    "  "####"  " ") << endl;
				auto five_seconds2 = 0.25s;
				std::this_thread::sleep_for(five_seconds2);
				system("cls");
				

			case 3:
				cout << std::format("    "  "###"  "  ") << endl;
				cout << std::format("    "  "###"  "  ") << endl;
				cout << std::format("####"  "    "  "####"  " "  "#") << endl;
				cout << std::format("####"  "    "  "####"  " "  " "  "##") << endl;
				cout << std::format("####"  "    "  "####"  " "  "   "  "###") << endl;
				cout << std::format("####"  "    "  "####"  " "  "    "  "#####") << endl;
				cout << std::format("####"  "    "  "####"  " "  "    "  "######") << endl;
				cout << std::format("     "  "####"  " ") << endl;
				cout << std::format("     "  "####"  " ") << endl;
				cout << std::format("     "  "####"  " ") << endl;
				cout << std::format("     "  "####"  " ") << endl;
				auto five_seconds3 = -0.25s;
				std::this_thread::sleep_for(five_seconds3);
				system("cls");
				


				break;
			default:
				break;
				
			}
		
	
	}
};
class Enemy
{
public:
	Enemy()
	{
		srand(time(NULL));
	}
	bool enemyKilled = false;
	int enemyHealth = 100;
	int choice = 0;
	int choiceItem = 0;
	int choiceSpell = 0;
	void Fight(mainCharacter* mainChar, int enemyAtkPower, int atkPower, bool Potion, bool escapePotion, bool mpPotion, bool fireSpellBool, bool healSpellBool)
	{
		
		if (mainCharacter* mainCast = dynamic_cast<mainCharacter*>(mainChar))
		{
			cout << "Your username: " <<  mainCast->usernameArr[0] << endl;
			cout << "Your health: " << mainCast->health << endl;
			cout << "Your MP: " << mainCast->magicPoints << endl;
			cout << "Enemy slime: " << enemyHealth << endl;
			cout << "Please choose an option." << endl;
			cout << "1)Slash" << endl;
			cout << "2)Smash" << endl;
			cout << "3)Item" << endl;
			cout << "4)Spell" << endl;
			cin >> choice;
			
			switch (choice)
			{
			case 1:
				if (mainChar != NULL)
				{

					mainCast->DrawCharacterAtk();
					mainCast->slashBool = true;
					if (mainCast->slashBool == true)
					{
						enemyHealth -= atkPower -= 2;
						cout << "You hit the enemy for: " << atkPower << endl;
						cout << "The enemy has a physical resistance. -2 atk." << endl;
					}
					else
					{
						enemyHealth -= atkPower;
						cout << "You hit the enemy for: " << atkPower << endl;
						
					}
					    cout << "the enemy hit you for: " << enemyAtkPower << endl;
						mainCast->health -= enemyAtkPower;
					
				}
				break;
			case 2:
				if (mainChar != NULL)
				{

					mainCast->DrawCharacterAtk();
					mainCast->smashBool = true;
					mainCast->smashWeakness = true;
					if (mainCast->smashBool == true && mainCast->smashWeakness == true)
					{
						enemyHealth -= atkPower = rand() % 11 + 20;
						cout << "You hit the enemy's weakness for: " << atkPower << endl;
						
					}
					else
					{
						enemyHealth -= atkPower -= 2;
						cout << "You hit the enemy for: " << atkPower << endl;
						cout << "The enemy has a physical resistance. -2 atk." << endl;
						
					}
					cout << "the enemy hit you for: " << enemyAtkPower << endl;
					mainCast->health -= enemyAtkPower;

				}
				break;
			case 3:
				if (Potion == true)
				{
					cout << "1)Potion" << endl;
				}
				if (mpPotion == true)
				{
					cout << "2)MpPotion" << endl;
				}
				cout << "3)Cancel" << endl;
				cin >> choiceItem;
				switch (choiceItem)
				{

				case 1:
					if (Potion == true && mainChar)
					{
						int healthGain = 25;
						mainCast->health += healthGain;
						cout << "You gained life." << endl;
						system("PAUSE");
					}
					else
					{
						cout << "Cannot use potion you have not killed a creature yet." << endl;
						system("PAUSE");
					}
					break;
				case 2:
					if (mpPotion == true)
					{
						int mpGain = 25;
						mainCast->magicPoints += mpGain;
						cout << "You gained magic points." << endl;
						system("PAUSE");
					}
					else
					{
						cout << "Cannot use potion you have not killed a creature yet." << endl;
						system("PAUSE");
					}
					break;
				default:
					break;
				}
				break;
			case 4:
				if (fireSpellBool == true)
				{
					cout << "1)Fireball" << endl;
				}
				if (healSpellBool == true)
				{
					cout << "2)Heal" << endl;
				}
				cout << "3)Cancel" << endl;
				cin >> choiceSpell;
				switch (choiceSpell)
				{
				case 1:
					if (fireSpellBool == true && mainCast->magicPoints > 0)
					{
						int fireBurnDamage = 35;
						enemyHealth -= fireBurnDamage;
						cout << "The amount of damage recieved by the enemy is: " << fireBurnDamage << endl;
						if (mainChar)
						{
							mainCast->magicPoints -= 35;
						}
						mainCast->health -= enemyAtkPower;
					}
					else if (mainCast->magicPoints <= 0 && fireSpellBool == true)
					{
						cout << "You don't have any MP points.." << endl;
					}
					else
					{
						cout << "You don't have that spell." << endl;
					}
					break;
				case 2:
					if (healSpellBool == true && mainCast->magicPoints > 0)
					{
						if (mainChar)
						{
							mainCast->health += 25;
							if (mainChar)
							{
								mainCast->magicPoints -= 35;
							}
							if (mainCast->health > 100)
							{
								mainCast->health = 100;
							}
						}
					}
					else if (mainCast->magicPoints < 0 && healSpellBool == true)
					{
						cout << "You don't have any MP points.." << endl;
					}
					else
					{
						cout << "You don't have that spell." << endl;
					}
					break;

				default:
					break;
				}
				break;
			default:
				break;
			}
		}
	}
};
class Enemy2 : public mainCharacter
{
public:
	int enemy2Health = 150;
	int choice2 = 0;
	int choiceItem2 = 0;
	int choiceSpell2 = 0;
	
	void Fight2(mainCharacter* mainChar, int enemyAtkPower, int atkPower, bool Potion, bool escapePotion, bool mpPotion, bool fireSpellBool, bool healSpellBool)
	{
		
		if (mainCharacter* mainCast = dynamic_cast<mainCharacter*>(mainChar))
		{
			srand(time(NULL));
			cout << "Your health: " << mainCast->health << endl;
			cout << "Your MP: " << mainCast->magicPoints << endl;
			cout << "Enemy bandit: " << enemy2Health << endl;
			cout << "Please choose an option." << endl;
			cout << "1)Slash" << endl;
			cout << "2)Smash" << endl;
			cout << "2)Item" << endl;
			cout << "3)Spell" << endl;
			cin >> choice2;
			switch (choice2)
			{
			case 1:
			
				if (mainChar)
				{
					mainCast->DrawCharacterAtk();
					cout << "You hit the enemy for: " << atkPower << endl;
					if (atkPower)
					{
						
						enemy2Health -= atkPower -= 5;
						cout << "Enemy has a resistance to physical attacks minus 5 damage." << atkPower << endl;
					}
					else
					{
						enemy2Health -= atkPower;
					}
					cout << "The enemy hit me for: " << enemyAtkPower << endl;
					mainCast->health -= enemyAtkPower;
				}
				break;
			case 2:
				mainCast->smashBool = true;
				if (mainChar != NULL)
				{

					mainCast->DrawCharacterAtk();
					
					if (mainCast->smashBool == true)
					{
					
						enemy2Health -= atkPower;
						cout << "You hit the enemy for: " << atkPower << endl;
						
					}
					else
					{
						enemy2Health -= atkPower -= 2;
						cout << "You hit the enemy for: " << atkPower << endl;
						cout << "The enemy has a physical resistance. -2 atk." << endl;

					}
					cout << "the enemy hit you for: " << enemyAtkPower << endl;
					mainCast->health -= enemyAtkPower;

				}
				break;
			case 3:
				if (Potion == true)
				{
					cout << "1)Potion" << endl;
				}
				if (mpPotion == true)
				{
					cout << "2)MpPotion" << endl;
				}
				cout << "3)Cancel" << endl;
				cin >> choiceItem2;
				switch (choiceItem2)
				{

				case 1:
					if (Potion == true && mainChar)
					{
						int healthGain = 25;
						mainCast->health += healthGain;
						cout << "You gained life." << endl;
						system("PAUSE");
					}
					else
					{
						cout << "Cannot use potion you have not killed a creature yet." << endl;
						system("PAUSE");
					}
					break;
				case 2:
					if (mpPotion == true)
					{
						int mpGain = 25;
						mainCast->magicPoints += mpGain;
						cout << "You gained magic points." << endl;
						system("PAUSE");
					}
					else
					{
						cout << "Cannot use potion you have not killed a creature yet." << endl;
						system("PAUSE");
					}
					break;
				default:
					break;
				}
				break;
			case 4:
				if (fireSpellBool == true)
				{
					cout << "1)Fireball" << endl;
				}
				if (healSpellBool == true)
				{
					cout << "2)Heal" << endl;
				}
				cout << "3)Cancel" << endl;
				cin >> choiceSpell2;
				switch (choiceSpell2)
				{
				case 1:
					if (fireSpellBool == true && mainCast->magicPoints > 0)
					{
						int fireBurnDamage = 35;
						enemy2Health -= fireBurnDamage;
						if (mainChar)
						{
							mainCast->magicPoints -= 35;
						}
						mainCast->health -= enemyAtkPower;
					}
					else if (mainCast->magicPoints <= 0 && fireSpellBool == true)
					{
						cout << "You don't have any MP points.." << endl;
					}
					else
					{
						cout << "You don't have that spell." << endl;
					}
					break;
				case 2:
					if (healSpellBool == true && mainCast->magicPoints > 0)
					{
						if (mainChar)
						{
							mainCast->health += 25;
							if (mainChar)
							{
								mainCast->magicPoints -= 35;
							}
							if (mainCast->health > 100)
							{
								mainCast->health = 100;
							}
						}
					}
					else if (mainCast->magicPoints < 0 && healSpellBool == true)
					{
						cout << "You don't have any MP points.." << endl;
					}
					else
					{
						cout << "You don't have that spell." << endl;
					}
					break;

				default:
					break;
				}
				break;
			default:
				break;
			}
		}
	}
};
int main()
{
	srand(time(NULL));
	bool Enemy1Dead = false;
	bool Play = true;
	
	Enemy* callEnemy = new Enemy();
	mainCharacter* mainMethod = new mainCharacter();
	Enemy2* callEnemy2 = new Enemy2();
	string username;
	
	cout << "Please enter your username." << endl;
	cin >> username;
	mainMethod->username(username);
	
	do {
		
		int randomItem = rand() % 2 + 1;
		int randomSpellRandom = rand() % 2 + 1;
		int physAtkPower = rand() % 10 + 1;
		int enemyAtkPower = rand() % 8 + 1;
		int psyAtkPowerMod = rand() % 100 + 50;
		int smashAtkMod = (rand() % 30) + 50;
		if (callEnemy->enemyHealth >= 0 && Enemy1Dead == false)
		{
		
			callEnemy->Fight(mainMethod, enemyAtkPower, physAtkPower, 
				mainMethod->potionBool, mainMethod->escapeBool, 
				mainMethod->mpBool, mainMethod->fireBool, mainMethod->healSpellBool);
		}
		else if (callEnemy->enemyHealth <= 0 && Enemy1Dead == false)
		{
			Enemy1Dead = true;
			mainMethod->health = 100;
			callEnemy->enemyHealth = 100;
			mainMethod->exp += 50;
			mainMethod->firstCheckpoint++;
			if (mainMethod->exp == 50 && mainMethod->firstCheckpoint >= 1)
			{
				cout << "You gained items, health, and exp after this encounter..." << endl;
				mainMethod->RandomItem(randomItem);
				mainMethod->randomSpell(randomSpellRandom);
				callEnemy->enemyKilled = true;
				mainMethod->health += 5;
				mainMethod->magicPoints += 5;
			}

		}
		if (callEnemy2->enemy2Health >= 0 && Enemy1Dead == true)
		{
			callEnemy2->Fight2(mainMethod, enemyAtkPower, physAtkPower,
				mainMethod->potionBool, mainMethod->escapeBool, mainMethod->mpBool, 
				mainMethod->fireBool, mainMethod->healSpellBool);
		}
		else if (callEnemy2->enemy2Health <= 0)
		{
			
		}
		//char yesNo;
		//cout << "Would you like to play again Y/N" << endl;
		//cin >> yesNo;
		//if (yesNo == 'N' || yesNo == 'n')
		//{
		//	Play = false;
		//}
		//else
		//{
		//	Play = true;
		//}
	} while (Play == true);
	return 0;
}

