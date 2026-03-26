#include "GameManager.h"
#include <iostream>
#include <ctime>

//GameManager::GameManager()
//	: player(nullptr), currentMonster(nullptr), floor(1)
//{
//}

//GameManager::~GameManager()
//{
//	delete player;
//	delete currentMonster;
//}

//void GameManager::Run()
//{
//	srand((unsigned int)time(nullptr));
//	MainMenu();
//}

//void GameManager::MainMenu()
//{
//	int input = 0;
//
//	while (true)
//	{
//		std::cout << "--- Main Menu ---" << std::endl;
//		std::cout << "[1] Start [2] Quick" << std::endl;
//		std::cin >> input;
//
//		switch (input)
//		{
//		case 1:
//			/*delete player;
//			player = nullptr;*/
//			floor = 1;
//
//			// player = new Character(...);
//
//			std::cout << "Game Start" << std::endl;
//			GameLoop();
//
//			break;
//		case 2:
//			std::cout << "Game Quick" << std::endl;
//			return;
//		default:
//			std::cout << "Error : 잘못된 입력입니다." << std::endl;
//			break;
//		}
//	}
//}

//void GameManager::GameLoop()
//{
//	/*while (0 < player->GetHp())
//	{
//		std::cout << "\n--- " << floor << "th floor ---" << std::endl;
//
//		if (floor == 10)
//		{
//			bool result = EnterBoss();
//			if (result)
//				std::cout << "\n=== 축하합니다! Game Clear! ===" << std::endl;
//			else
//				std::cout << "Game Over!" << std::endl;
//			return;
//		}
//
//		bool proceeded = false;
//
//		if (floor % 3 == 0)
//			proceeded = EnterShop();
//		else
//			proceeded = EnterDungeon();
//
//		if (proceeded)
//		{
//			MakeFloor();
//		}
//		else
//		{
//			std::cout << "Game Over!" << std::endl;
//			return;
//		}
//
//	}*/
//
//	std::cout << "Game Over!" << std::endl;
//}

//bool GameManager::EnterBoss()
//{
//	std::cout << "\n--- 보스 등장! ---" << std::endl;
//	// currentMonster = new Boss();
//
//	std::cout << "보스와 전투를 시작합니다!" << std::endl;
//	return Battle();
//}

//bool GameManager::EnterShop()
//{
//	std::cout << "\n--- Shop ---" << std::endl;
//
//	// 추후 Shop 클래스 구현 후 활성화
//	//Shop* shop = new Shop();
//	//shop->Sell(player);
//	//delete shop;
//
//	return true;
//}

//bool GameManager::EnterDungeon()
//{
//	/*Monster* encounters[4];
//	MakeEncounters(encounters);*/
//
//	int input = 0;
//
//	while (true)
//	{
//		std::cout << "\n어떤 몬스터와 싸울까요?" << std::endl;
//
//		// 추후 몬스터 클래스 구현 후 활성화
//		//for (int i = 0; i < 4; i++)
//		//	std::cout << "[" << i + 1 << "] " << encounters[i]->GetName() << std::endl;
//
//		std::cin >> input;
//
//		/*if (1 <= input && 4 >= input)
//		{
//			currentMonster = encounters[input - 1];
//			encounters[input - 1] = nullptr;
//
//			bool isWIn = Battle();
//
//			for (int i = 0; i < 4; i++)
//			{
//				delete encounters[i];
//				encounters[i] = nullptr;
//			}
//
//			return isWIn;
//		}*/
//
//		std::cout << "잘못된 입력입니다." << std::endl;
//	}
//}

//bool GameManager::Battle()
//{
//	std::cout << "\n--- 전투 시작 ---" << std::endl;
//
//	//while (0 < player->GetHp() && 0 < currentMonster->GetHp())
//	//{
//	//	int input = 0;
//	//	std::cout << "[1] Attack  [2] Defence  [3] Skill" << std::endl;
//	//	std::cin >> input;
//
//	//	switch (input)
//	//	{
//	//	case 1:
//	//		//player->Attak(currentMonster);
//	//		break;
//	//	case 2:
//	//		//player->Defence(currentMonster);
//	//		break;
//	//	case 3:
//	//		// 추후 스킬 구현
//	//		break;
//	//	default:
//	//		std::cout << "잘못된 입력입니다." << std::endl;
//	//		continue;
//	//	}
//
//	//	if (0 < currentMonster->GetHp())
//	//	{
//	//		int monsterAction = rand() % 2;
//
//	//		if (monsterAction == 0)
//	//		{
//	//			std::cout << "몬스터가 공격했습니다!" << std::endl;
//	//			//currentMonster->Attak(player);
//	//		}
//	//		else
//	//		{
//	//			std::cout << "몬스터가 방어했습니다!" << std::endl;
//	//			//currentMonster->Defence(player);
//	//		}
//	//	}
//	//}
//
//	//bool isWin = 0 < player->GetHp() && 0 >= currentMonster->GetHp();
//
//	//if (isWin)
//	//{
//	//	std::cout << "Win!" << std::endl;
//	//	//player->GetItem(currentMonster->Drop());
//	//}
//	//else
//	//{
//	//	std::cout << "Lose!" << std::endl;
//	//}
//
//	//delete currentMonster;
//	//currentMonster = nullptr;
//
//	//return isWin;
//}	

//void GameManager::MakeEncounters(Monster* encounters[4])
//{
//	// 추후 몬스터 클래스 구현 후 활성화
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	int roll = rand() % 3;
//
//	//	switch (roll)
//	//	{
//	//	case 0:
//	//		encounters[i] = new Slime();
//	//		break;
//	//	case 1:
//	//		encounters[i] = new Goblin();
//	//		break;
//	//	case 2:
//	//		encounters[i] = new Orc();
//	//		break;
//	//	}
//	//}
//
//}

//void GameManager::MakeFloor()
//{
//	floor++;
//	std::cout << "현재 " << floor << "층에 진입했습니다." << std::endl;
//}