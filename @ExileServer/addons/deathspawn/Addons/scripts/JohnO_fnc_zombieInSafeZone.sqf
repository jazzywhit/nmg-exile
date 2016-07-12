_zombieArray =

[
  "RyanZombieC_man_1slow","RyanZombieC_man_polo_1_Fslow","RyanZombieC_man_polo_2_Fslow","RyanZombieC_man_polo_4_Fslow","RyanZombieC_man_polo_5_Fslow","RyanZombieC_man_polo_6_Fslow","RyanZombieC_man_p_fugitive_Fslow","RyanZombieC_man_w_worker_Fslow","RyanZombieC_man_hunter_1_Fslow",
  "RyanZombieC_man_1medium","RyanZombieC_man_polo_1_Fmedium","RyanZombieC_man_polo_2_Fmedium","RyanZombieC_man_polo_4_Fmedium","RyanZombieC_man_polo_5_Fmedium","RyanZombieC_man_polo_6_Fmedium","RyanZombieC_man_p_fugitive_Fmedium","RyanZombieC_man_w_worker_Fmedium","RyanZombieC_man_hunter_1_Fmedium",
  "RyanZombieC_man_1","RyanZombieC_man_polo_1_F","RyanZombieC_man_polo_2_F","RyanZombieC_man_polo_4_F","RyanZombieC_man_polo_5_F","RyanZombieC_man_polo_6_F","RyanZombieC_man_p_fugitive_F","RyanZombieC_man_w_worker_F","RyanZombieC_man_hunter_1_F","RyanZombieC_man_pilot_F","RyanZombieC_journalist_F","RyanZombieC_Orestes","RyanZombieC_Nikos",
  "RyanZombieSpider1","RyanZombieSpider2","RyanZombieSpider3","RyanZombieSpider4","RyanZombieSpider5","RyanZombieSpider6",
  "RyanZombieB_Soldier_02_fslow","RyanZombieB_Soldier_02_f_1slow","RyanZombieB_Soldier_02_f_1_1slow","RyanZombieB_Soldier_03_fslow","RyanZombieB_Soldier_03_f_1slow","RyanZombieB_Soldier_03_f_1_1slow","RyanZombieB_Soldier_04_fslow","RyanZombieB_Soldier_04_f_1slow","RyanZombieB_Soldier_04_f_1_1slow","RyanZombieB_Soldier_lite_Fslow","RyanZombieB_Soldier_lite_F_1slow",
  "RyanZombieB_Soldier_02_fmedium","RyanZombieB_Soldier_02_f_1medium","RyanZombieB_Soldier_02_f_1_1medium","RyanZombieB_Soldier_03_fmedium","RyanZombieB_Soldier_03_f_1medium","RyanZombieB_Soldier_03_f_1_1medium","RyanZombieB_Soldier_04_fmedium","RyanZombieB_Soldier_04_f_1medium","RyanZombieB_Soldier_04_f_1_1medium","RyanZombieB_Soldier_lite_Fmedium","RyanZombieB_Soldier_lite_F_1medium",
  "RyanZombieB_Soldier_02_f", "RyanZombieB_Soldier_02_f_1", "RyanZombieB_Soldier_02_f_1_1", "RyanZombieB_Soldier_03_f", "RyanZombieB_Soldier_03_f_1", "RyanZombieB_Soldier_03_f_1_1", "RyanZombieB_Soldier_04_f", "RyanZombieB_Soldier_04_f_1", "RyanZombieB_Soldier_04_f_1_1", "RyanZombieB_Soldier_lite_F", "RyanZombieB_Soldier_lite_F_1",
  "RyanZombieCrawler1", "RyanZombieCrawler2", "RyanZombieCrawler3", "RyanZombieCrawler4", "RyanZombieCrawler5", "RyanZombieCrawler6", "RyanZombieCrawler7", "RyanZombieCrawler8", "RyanZombieCrawler9", "RyanZombieCrawler10", "RyanZombieCrawler11", "RyanZombieCrawler12", "RyanZombieCrawler13", "RyanZombieCrawler14", "RyanZombieCrawler1Opfor", "RyanZombieCrawler2Opfor", "RyanZombieCrawler3Opfor", "RyanZombieCrawler4Opfor", "RyanZombieCrawler5Opfor", "RyanZombieCrawler6Opfor", "RyanZombieCrawler7Opfor", "RyanZombieCrawler8Opfor", "RyanZombieCrawler9Opfor", "RyanZombieCrawler10Opfor", "RyanZombieCrawler11Opfor", "RyanZombieCrawler12Opfor", "RyanZombieCrawler13Opfor", "RyanZombieCrawler14Opfor",
  "RyanZombieC_man_1walker","RyanZombieC_man_polo_1_Fwalker","RyanZombieC_man_polo_2_Fwalker","RyanZombieC_man_polo_4_Fwalker","RyanZombieC_man_polo_5_Fwalker","RyanZombieC_man_polo_6_Fwalker","RyanZombieC_man_p_fugitive_Fwalker","RyanZombieC_man_w_worker_Fwalker","RyanZombieC_scientist_Fwalker","RyanZombieC_man_hunter_1_Fwalker","RyanZombieC_man_pilot_Fwalker","RyanZombieC_journalist_Fwalker","RyanZombieC_Oresteswalker","RyanZombieC_Nikoswalker"
];

if (ZMB_COUNT > 0) then
{ 

  {

    _zombies = typeOf _x; // return class name of all units selection
    _position = getPosATL _x;
    if ((_zombies in _zombieArray) && ((getPosATL _x) call Exile_inSafeZone)) then 
    {
      _x setDamage 1; // kill the selection
    };  

  }  forEach AllUnits; // selection criteria
};  

