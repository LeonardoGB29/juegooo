#include "Model_LevelMap.h"
#include <filesystem>
Model_LevelMap::Model_LevelMap(Controller_Room& setRoom) : room(setRoom){
	maps[0] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\0.txt");
	maps[1] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\1.txt");
	maps[2] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\2.txt");
	maps[3] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\3.txt");
	maps[4] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\4.txt");
	maps[5] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\5.txt");
	maps[6] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\6.txt");
	maps[7] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\7.txt");
	maps[8] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\8.txt");
	maps[9] = new Model_TypeMap(std::filesystem::current_path().generic_string() + "\\resources\\maps\\level1\\normal\\9.txt");
	enemys = 0;
	actualLevelRoom = 0;
	mode = 0;
}
void Model_LevelMap::putEnemies(std::vector<std::shared_ptr<Controller_Enemy>> vectorEnemy, int EnemyCount) {
	if (EnemyCount == 1) {
		vectorEnemy[0]->getModel().setPosition(384, 832);
	}
	else if (EnemyCount == 2) {
		vectorEnemy[0]->getModel().setPosition(320, 832);
		vectorEnemy[1]->getModel().setPosition(448, 832);
	}// poner los demas:
}
void Model_LevelMap::Update() {
	if (actualLevelRoom == 0) {
		room.reloadMap(*maps[0]);
	}
	if (actualLevelRoom == 1) {
		room.reloadMap(*maps[1]);
	}
}
Model_LevelMap::~Model_LevelMap() {

}