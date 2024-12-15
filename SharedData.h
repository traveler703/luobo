#ifndef __SHARED__DATA_H__
#define __SHARED__DATA_H__

class SharedData
{
public:
    static SharedData* getInstance();

    int UsersMoney;    //玩家的钱
    bool SceneAccess[3];    //每个关卡的访问权限
    bool SceneSuccess[3];    //每个关卡是否胜利
    int SceneFinishedGroups[3];    //每个关卡已完成的组数

private:
    SharedData();
    ~SharedData();
    static SharedData* _instance;
};

#endif // __SHARED__DATA_H__